#include<stdio.h>
#define NUM 5
int get_max(int sum[]);
int get_min(int sum[]);
typedef struct{
  int id;
  int math;
  int eng;
  int phy;
}STUDENT;

int main()
{
  int sum[NUM],max,min,allsum=0,i;
  double ave;
  STUDENT gakusei[NUM];
  for(i=0;i<NUM;i++){
    printf("%d人目の学生番号は?:",i+1);
    scanf("%d",&gakusei[i].id);
    printf("数学の点数は?:");
    scanf("%d",&gakusei[i].math);
    printf("英語の点数は?:");
    scanf("%d",&gakusei[i].eng);
    printf("物理の点数は?:");
    scanf("%d",&gakusei[i].phy);
    sum[i]=gakusei[i].math+gakusei[i].eng+gakusei[i].phy;
    allsum+=sum[i];
  }
  max=get_max(sum);
  min=get_min(sum);
  ave=(double)allsum/NUM;
  printf("\n学生番号 数学 英語 物理 合計\n");
  for(i=0;i<NUM;i++){
    printf(" %6d  %3d  %3d  %3d  %3d\n",gakusei[i].id,gakusei[i].math,gakusei[i].eng,gakusei[i].phy,sum[i]);
  }
  printf("最高点は%d点\n",max);
  printf("最低点は%d点\n",min);
  printf("平均点は%.2f点\n",ave);
  return 0;
}

int get_max(int sum[])
{
  int max=0,i;
  for(i=0;i<NUM;i++){
    if(max<sum[i]){
      max=sum[i];
    }
  }
  return max;
}

int get_min(int sum[])
{
  int min,i;
  for(i=0;i<NUM;i++){
    if((i==0)||(min>sum[i])){
      min=sum[i];
    }
  }
  return min;
}
