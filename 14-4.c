#include<stdio.h>
void print_board(int board[3][3]);
void mark_board(int board[3][3], int turn);
void  error_check(int board[3][3],int vertical,int horizon,int turn);
int main()
{
  int turn=1,i;
  int board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  for(i=1;i<=9;i++){
    switch(turn){
    case 1:
      printf("oのターンです\n");
      break;
    case -1:
      printf("xのターンです\n");
      break;
    }
    mark_board(board,turn);
    print_board(board);
    switch(turn){
    case 1:
      turn=-1;
      break;
    case -1:
      turn=1;
      break;
    }
  }
  return 0;
}

void print_board(int board[3][3])
{
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      switch(board[i][j]){
      case 0:
	printf("| ");
	break;
      case 1:
	printf("|o");
	break;
      case -1:
	printf("|x");
	break;
      }
    }
    printf("|\n");
  }
}

void mark_board(int board[3][3], int turn)
{
  int vertical,horizon;
  switch(turn){
  case 1:
      printf("縦位置は？");
      scanf("%d",&vertical);
      printf("横位置は？");
      scanf("%d",&horizon);
      error_check(board,vertical,horizon,turn);
      break;
  case -1:
      printf("縦位置は？");
      scanf("%d",&vertical);
      printf("横位置は？");
      scanf("%d",&horizon);
      error_check(board,vertical,horizon,turn);
      break;
  }  
}

void error_check(int board[3][3],int vertical,int horizon,int turn)
{
  int check;
  if((vertical>=3)||(horizon>=3)||(vertical<0)||(horizon<0)){
    check=2;
  }else if(board[vertical][horizon]!=0){
    check=2;
  }else{
    check=1;
  }
  switch(check){
  case 1:
    board[vertical][horizon]=turn;
    break;
  case 2:
    printf("そこには置けません\n");
    mark_board(board,turn);
    break;
  }
}
