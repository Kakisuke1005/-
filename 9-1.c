#include <stdio.h>
#define N 3
#define M 5

int main()
{
  int i,j;
  int score[N][M];
  printf("3人の得点を科目順に入力\n");
  printf("英語 数学 理科 国語 社会\n");
  for(i=0;i<N;i++){
    printf("No.%d\n",i+1);
    for(j=0;j<M;j++){
      scanf("%d",&score[i][j]);
    }
  }
  printf("3人の得点を科目順に表示\n");
  printf("     英語 数学 理科 国語 社会\n");
  for(i=0;i<N;i++){
    printf("No.%d:",i+1);
    for(j=0;j<M;j++){
      printf("  %d",score[i][j]);
      if(j==4){
	printf("\n");
      }else{
	printf(",");
      }
    }
  }
  return 0;
} 
