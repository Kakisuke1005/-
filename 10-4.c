#include<stdio.h>
#define N 50
int get_length(char str[]);
int main()
{
  char str[N],cpstr[N];
  int num,i;
  printf("文字列:");
  scanf("%s",str);
  num=get_length(str);
  printf("文字列の長さ:%d\n",num);
  for(i=0;i<num;i++){
    cpstr[(num-1)-i]=str[i];
}
  cpstr[num]='\0';
  printf("文字列（逆順）:%s.%s\n",str,cpstr);
  return 0;
}

int get_length(char str[])
{
  int i,num=0;
  for(i=0;str[i]!='\0';i++){
    num++;
  }
  return num;
}
