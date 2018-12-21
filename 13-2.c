#include<stdio.h>
#define N 10
void average_calc(int data[][2], double mean[], int no);
int main()
{
  int data[N][2],num,i,j;
  double mean[N];
  do{
    printf("入力データ数を入力して下さい:");
    scanf("%d",&num);
    if(num>10){
      printf("データ数が10を超えているか負です\n");
    }
  }while(num>10);
  for(i=0;i<num;i++){
    for(j=0;j<2;j++){
      do{
	printf("データNo. %d",i+1);
	switch(j){
	case 0:
	  printf("-a:");
	  break;
	case 1:
	  printf("-b:");
	  break;
	}
	scanf("%d",&data[i][j]);
	if((data[i][j]>100)||(data[i][j]<0)){
	    printf("入力データが100を超えているか負です\n");
	}
      }while((data[i][j]>100)||(data[i][j]<0));
    }
  }
  printf("\n入力された値を表示します\n");
  for(i=0;i<num;i++){
    printf("[No. %d] (a)  %d (b)  %d\n",i+1,data[i][0],data[i][1]);
  }
  average_calc(data,mean,num);
  printf("\n各データ組の平均値は以下の通りです\n");
  for(i=0;i<num;i++){
    printf("[No. %d] %.1f\n",i+1,mean[i]);
  }
  return 0;
}

void average_calc(int data[][2], double mean[], int no)
{
  int i,j,sum;
  for(i=0;i<no;i++){
    sum=0;
    for(j=0;j<2;j++){
      sum+=data[i][j];
    }
    mean[i]=(double)sum/2;
  }
}
