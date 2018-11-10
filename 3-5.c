#include<stdio.h>
int main(void)
{
  int sum=0,score,max,maxNo,min,minNo,num,i=1;
  double ave;
  printf("Input the number of students: ");
  scanf("%d",&num);
  while(i<=num){
    printf("No.%d: ",i);
    scanf("%d",&score);
    sum+=score;
    if((i==1)||(max<score)){
      max=score;
      maxNo=i;
    }
    if((i==1)||(min>score)){
      min=score;
      minNo=i;
    }
    i++;
  }
  ave=(double)sum/(double)num;
  printf("Average: %.1f\n",ave);
  printf("Max: No.%d, %d\n",maxNo,max);
  printf("Min: No.%d, %d\n",minNo,min);
  return 0;
}

