#include<stdio.h>
#define N 20
int max_array(int score[], int n);
int main()
{
  int score[N],n,i,max;
  printf("試験の最高点を計算します，人数を入力してください（1～20）:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("No.%d:",i);
    scanf("%d",&score[i-1]);
  }
  max=max_array(score,n);
  printf("%d人の最高点は%d点です\n",n,max);
  return 0;
}

int max_array(int score[], int n)
{
  int max,i;
  for(i=0;i<n;i++){
    if((i==0)||(max<score[i])){
      max=score[i];
    }
  }
  return max;
}
