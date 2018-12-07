#include<stdio.h>
typedef struct{
  int id;
  char name[100];
}STUDENT;
int main()
{
  STUDENT taro={296000,"Taro"};
  printf("学生番号:%d\n",taro.id);
  printf("氏名:%s\n",taro.name);
  return 0;
}
