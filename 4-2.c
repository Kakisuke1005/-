#include<stdio.h>
void error_message(void);

int main(void)
{
  int num;
  printf("奇数を入力して下さい：");
  scanf("%d",&num);
  if(num%2==0){
    error_message();
  }else{
    printf("%dは奇数です\n",num);
  }
  return 0;
}

void error_message(void)
{
  printf("入力ミスです！\n");
}
