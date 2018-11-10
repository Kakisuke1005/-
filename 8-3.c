#include<stdio.h>
#define N 20
void get_score( int score[], int n);
void error_message(int point);
void show_array( int array[], int n);
int max_array(int array[], int n);
int min_array(int array[], int n);
double average_array(int array[], int n);

int main()
{
  int n,max,min,array[N];
  double ave;
  printf("データ数を入力してください（1～20）:");
  scanf("%d",&n);
  get_score(array,n);
  printf("\nデータを表示します\n");
  show_array(array,n);
  printf("\n");
  max=max_array(array,n);
  min=min_array(array,n);
  ave=average_array(array,n);
  printf("最大値は%dです\n",max);
  printf("最小値は%dです\n",min);
  printf("平均値は%.1fです\n",ave);
  return 0;
}

void get_score( int score[], int n)
{
  int i;
  for(i=0;i<n;i++){
    do{
      printf("No.%d:",i+1);
      scanf("%d",&score[i]);
      if((score[i]<=0)||(score[i]>100)){
	error_message(score[i]);
      }
    }while((score[i]<=0)||(score[i]>100));
  }
}

void error_message(int point)
{
  if(point<=0){
    printf("****入力ミス:%dは0未満です****\n",point);
  }
  if(point>100){
    printf("****入力ミス:%dは100をこえています****\n",point);
  }
}

void show_array( int array[], int n)
{
  int i;
  for(i=1;i<=n;i++){
    printf("No.%d:%d\n",i,array[i-1]);
  }
}

int max_array(int array[], int n)
{
  int max,i;
  for(i=0;i<n;i++){
    if((i==0)||(max<array[i])){
      max=array[i];
    }
  }
  return max;
}

int min_array(int array[], int n)
{
  int min,i;
  for(i=0;i<n;i++){
    if((i==0)||(min>array[i])){
      min=array[i];
    }
  }
  return min;
}

double average_array(int array[], int n)
{
  double ave;
  int sum=0,i;
  for(i=0;i<n;i++){
    sum+=array[i];
  }
  ave=(double)sum/(double)n;
  return ave;
}
