#include<stdio.h>
#define N 50
int main()
{
  char first_name[N],family_name[N];
  int i,num1,num2;
  printf("名の字数を入力して下さい:");
  scanf("%d",&num1);
  for(i=0;i<num1;i++){
    printf("first_name[%d]=",i);
    scanf("%*c%c",&first_name[i]);
  }
  first_name[num1]='\0';
  printf("姓の字数を入力して下さい:");
  scanf("%d",&num2);
  for(i=0;i<num2;i++){
    printf("family_name[%d]=",i);
    scanf("%*c%c",&family_name[i]);
  }
  family_name[num2]='\0';
  printf("\n選手の氏名は\n");
  printf("姓:");
  for(i=0;i<num2;i++){
    printf("%c",family_name[i]);
  }
  printf("\n");
  printf("名:");
  for(i=0;i<num1;i++){
    printf("%c",first_name[i]);
  }
  printf("\n");
  return 0;
}

