#include<stdio.h>
void print_board(int board[3][3]);
void mark_board(int board[3][3], int turn);
int main()
{
  int turn=1;
  int board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  mark_board(board,turn);
  print_board(board);
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
    printf("oのターンです\n");
    printf("縦位置は？");
    scanf("%d",&vertical);
    printf("横位置は？");
    scanf("%d",&horizon);
    board[vertical][horizon]=1;
    break;
  case 2:
    printf("xのターンです");
    printf("縦位置は？");
    scanf("%d",&vertical);
    printf("横位置は？");
    scanf("%d",&horizon);
    board[vertical][horizon]=-1;
    break;
  }  
}
