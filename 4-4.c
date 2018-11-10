#include<stdio.h>
void draw_char(int a_number, int s_number);

int main(void)
{
  int a_number,s_number;
  printf("アスタリスクの数：");
  scanf("%d",&a_number);
  printf("シャープの数：");
  scanf("%d",&s_number);
  draw_char(a_number, s_number);
  printf("\n");
  return 0;
}

void draw_char(int a_number, int s_number)
{
  int i,j;
  for(i=1;i<=a_number;i++){
    printf("*");
  }
  for(j=1;j<=s_number;j++){
    printf("#");
  }
  return;
}
