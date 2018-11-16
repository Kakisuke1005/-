#include<stdio.h>
#define N 7
#define M 8
int main()
{
  int  data[M][N] = {{0, 0, 1, 1, 1, 0, 0},
		    {0, 0, 1, 1, 1, 0, 0},
		    {0, 0, 1, 1, 1, 0, 0},
		    {0, 0, 0, 1, 0, 1, 0},
		    {0, 1, 1, 1, 1, 1, 0},
		    {0, 1, 0, 1, 0, 0, 0},
		    {0, 0, 1, 0, 1, 0, 0},
		    {0, 1, 0, 0, 0, 1, 0}};
  int i,j;
  for(i=0;i<M;i++){
    for(j=0;j<N;j++){
      if(data[i][j]==0){
	printf("x");
      }else{
	printf("o");
      }
    }
    printf("\n");
  }
  return 0;
}
