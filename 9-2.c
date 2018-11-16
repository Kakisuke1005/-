#include<stdio.h>
#define H 4
#define K 3
int main()
{
  int i,j;
  int apart[K][H];
  printf("住人の年齢を入力して下さい\n");
  for(i=0;i<K;i++){
    printf("<< %d階 >>\n",i+1);
    for(j=1;j<=H;j++){
      printf("%d号室:",j);
      scanf("%d",&apart[i][j-1]);
    }
  }
  printf("\n<< 年齢見取図 >>\n");
  for(i=2;i>=0;i--){
    printf("[%d階] ",i+1);
    for(j=1;j<=H;j++){
      printf("(%d号室)%d歳 ",j,apart[i][j-1]);
    }
    printf("\n");
  }
  return 0;
}
