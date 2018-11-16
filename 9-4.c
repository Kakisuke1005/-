#include<stdio.h>
#define N 10
void read_score(int score[][3], int n);
void show_score(int score[][3], int subject, int n);

int main()
{
  int score[N][3];
  int n,subject;
  printf("学生数を入力して下さい（1～10）\n");
  printf("学生数:");
  scanf("%d",&n);
  read_score(score,n);
  while(1){
    printf("\n得点表を表示する科目を選択して下さい\n");
    printf("英語=>1,数学=>2,国語=>3,終了=>0:");
    scanf("%d",&subject);
    if(subject==0){
      printf("\n終了します\n");
      break;
    }else{
      printf("\n");
      show_score(score,subject,n);
    }
  }
  return 0;
}

void read_score(int score[][3], int n)
{
  int i,j;
  for(i=1;i<=n;i++){
    printf("%d番目の学生\n",i);
    for(j=1;j<=3;j++){
      do{
	printf("(%d)",j);
	if(j==1){
	  printf("英語:");
	}else if(j==2){
	  printf("数学:");
	}else if(j==3){
	  printf("国語:");
	}
	scanf("%d",&score[i-1][j-1]);
      }while((score[i-1][j-1]>100)||(score[i-1][j-1]<0));
    }
  }
}

void show_score(int score[][3], int subject, int n)
{
  int i;
  switch(subject){
  case 1:
    printf("[英語]\n");
    printf("番号  得点\n");
    for(i=0;i<n;i++){
      printf("%d     %d\n",i+1,score[i][0]);
    }
    break;
  case 2:
    printf("[数学]\n");
    printf("番号  得点\n");
    for(i=0;i<n;i++){
      printf("%d     %d\n",i+1,score[i][1]);
    }
    break;
  case 3:
    printf("[国語]\n");
    printf("番号  得点\n");
    for(i=0;i<n;i++){
      printf("%d     %d\n",i+1,score[i][2]);
    }
    break;
  }
}

