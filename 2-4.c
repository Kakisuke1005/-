#include<stdio.h>
int main(void)
{
  int num,max,min,i;
  printf("三つの整数を入力してください\n");
  for(i=1;i<=3;i++){
    printf("整数（No.%d）：",i);
    scanf("%d",&num);
    if((i==1)||(num>max)){
      max=num;
    }
    if((i==1)||(num<min)){
      min=num;
    }
  }
  printf("最大値：%d\n",max);
  printf("最小値：%d\n",min);
  return 0;
}
