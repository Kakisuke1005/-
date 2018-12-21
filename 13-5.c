#include<stdio.h>
#define N 10
#define M 10
typedef struct{
  int data[2];
  char id_num[M];
}DATA;
void average_calc(DATA student[], double mean[], int no);
int max_calc(double mean[], int no);
int main()
{
  int num,i,j,max_num;
  double mean[N];
  DATA student[N];
  do{
    printf("入力データ数を入力して下さい:");
    scanf("%d",&num);
    if(num>10){
      printf("データ数が10を超えているか負です\n");
    }
  }while(num>10);
  for(i=0;i<num;i++){
    printf("データNo. %dのID番号:",i+1);
    scanf("%s",student[i].id_num);
  }
  printf("各IDのデータを入力して下さい\n");
  for(i=0;i<num;i++){
    printf("%s\n",student[i].id_num);
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
	scanf("%d",&student[i].data[j]);
	if((student[i].data[j]>100)||(student[i].data[j]<0)){
	    printf("入力データが100を超えているか負です\n");
	}
      }while((student[i].data[j]>100)||(student[i].data[j]<0));
    }
  }
  printf("\n入力された値を表示します\n");
  for(i=0;i<num;i++){
    printf("[%s] (a)  %d (b)  %d\n",student[i].id_num,student[i].data[0],student[i].data[1]);
  }
  average_calc(student,mean,num);
  printf("\n各データ組の平均値は以下の通りです\n");
  for(i=0;i<num;i++){
    printf("[%s] %.1f\n",student[i].id_num,mean[i]);
  }
  max_num=max_calc(mean,num);
  printf("\n平均値の最大値は%sの%.1fです\n",student[max_num].id_num,mean[max_num]);
  return 0;
}

void average_calc(DATA student[], double mean[], int no)
{
  int i,j,sum;
  for(i=0;i<no;i++){
    sum=0;
    for(j=0;j<2;j++){
      sum+=student[i].data[j];
    }
    mean[i]=(double)sum/2;
  }
}

int max_calc(double mean[], int no)
{
  int max=0,i,num;
  for(i=0;i<no;i++){
    if(max<mean[i]){
      max=mean[i];
      num=i;
    }
  }
  return num;
}
