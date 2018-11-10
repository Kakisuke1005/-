#include<stdio.h>
#define N 10
void add_data(int array[], int n);
int main()
{
  int i,array[N],n;
  printf("データ数を入力して下さい（1～10）:");
  scanf("%d",&n);
  puts("データを入力して下さい");
  for(i=1;i<=n;i++){
    printf("No.%d:",i);
    scanf("%d",&array[i-1]);
  }
  printf("計算して並べました\n");
  add_data(array,n);
  return 0;
}

void add_data(int array[], int n)
{
  int i,j;
  for(i=0;i<n;i++){
    array[i]*=10;
    if(i==0){
      array[i]+=0;
    }else{
      array[i]+=array[i-1];
    }
  }
  for(j=1;j<=n;j++){
    printf("No.%d:%d\n",j,array[j-1]);
  }
}
