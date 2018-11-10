#include<stdio.h>
#define SIZE 10
int main()
{
  int array[SIZE],i,j,sum,max,min,max_num,min_num;
  double ave;
  sum=0;
  for(i=0;i<SIZE;i++){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&array[i]);
    sum+=array[i];
    if((i==0)||(max<array[i])){
      max=array[i];
      max_num=i+1;
    }
    if((i==0)||(min>array[i])){
      min=array[i];
      min_num=i+1;
    }
  }
  printf("\nデータ一覧:\n");
  for(j=0;j<SIZE;j++){
    printf("[No.%2d] %d\n",j+1,array[j]);
  }
  ave=(double)sum/(double)SIZE;
  printf("\n平均値 = %.2f\n",ave);
  printf("最大値 = %d (no.%d)\n",max,max_num);
  printf("最小値 = %d (no.%d)\n",min,min_num);
  return 0;
}
