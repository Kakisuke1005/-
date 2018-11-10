#include<stdio.h>
int get_month(void);

int main(void)
{
  int month;
  printf("誕生日は何月ですか\n");
  month=get_month();
  printf("あなたは%d月生まれですね\n",month);
  return 0;
}

int get_month(void)
{
  int month;
  while(1){
  printf("月：");
  scanf("%d",&month);
  if(month>=1&&month<=12){
    break;
  }else{
    printf("入力ミスです！\n");
  }
  }
  return month;
}
