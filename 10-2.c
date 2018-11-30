#include<stdio.h>
#define N 50
int main()
{
  char first_name[N]="Daisuke";
  char family_name[N];
  printf("姓を入力して下さい:");
  scanf("%s",family_name);
  printf("< 2つの文字列を表示します >\n");
  printf("姓:%s\n",family_name);
  printf("名:%s\n",first_name);
  return 0;
}
