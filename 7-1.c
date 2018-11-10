#include<stdio.h>
#define SIZE 5
int main()
{
  int array[SIZE]={5,4,3,2,1};
  int sum=0,i;
  for(i=0;i<SIZE;i++){
    sum+=array[i];
  }
  printf("arrayの合計値 = %d\n",sum);
  return 0;
}


