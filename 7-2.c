#include<stdio.h>
#define SIZE 10
int main()
{
  int array[SIZE],sum,i,j;
  sum=0;
  for(i=0;i<SIZE;i++){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&array[i]);
    sum+=array[i];
  }
  printf("\nデータ一覧:\n");
  for(j=0;j<SIZE;j++){
    printf("[No.%2d] %d\n",j+1,array[j]);
  }
  printf("\n合計値 = %d\n",sum);
  return 0;
}
