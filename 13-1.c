#include<stdio.h>
#define N 10
int main()
{
  int data[N][2],num,i,j;
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
  return 0;
}
