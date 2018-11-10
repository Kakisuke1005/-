#include<stdio.h>
int main(void)
{
  int sum,max,min,i;
  printf("min: ");
  scanf("%d",&min);
  printf("max: ");
  scanf("%d",&max);
  sum=0;
  i=min;
  while(i<=max){
    sum=i+sum;
    i++;
  }
  printf("sum: %d\n",sum);
  return 0;
}
