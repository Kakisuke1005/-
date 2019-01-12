#include<stdio.h>
void print_board(int board[3][3]);
int main()
{
  int board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  board[0][1]=1;
  board[0][2]=1;
  board[1][2]=-1;
  board[1][1]=-1;
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
