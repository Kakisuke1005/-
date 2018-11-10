#include<stdio.h>
int main(void)
{
  int num;
  printf("正の整数を入力してください：");
  scanf("%d",&num);
  if(num%2==1){
    printf("%dは奇数です\n",num);
  }else if(num%2==0){
    printf("%dは偶数です\n",num);
  }
  return 0;
}
