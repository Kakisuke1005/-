#include<stdio.h>
int main(void)
{
  int i,j;
  for(i=9;i>=1;i--){
    for(j=9;j>=1;j--){
      printf("%d ",i*j);
    }
    printf("\n");
  }
  return 0;
}
