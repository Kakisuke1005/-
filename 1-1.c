#include<stdio.h>
int main(void)
{
  int i,num,max;
  max=0;
  for(i=1;i<=4;i++){
    printf("%d番目の値：",i);
    scanf("%d",&num);
    if(num<=0){
      i-=1;
      printf("値は正の数ではありません\n");
    }else if(num>max){
      max=num;
    }
  }
  printf("最も大きい値は%dです\n",max);
  return 0;
}



