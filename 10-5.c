#include<stdio.h>
#include<string.h>
#define S 4
#define N 50
void serch(char name[][N],char hometown[][N],int result[]);
void show_result(char name[][N],char hometown[][N],int result[],int k);
int main()
{
  char name[S][N],hometown[S][N];
  char retrieval[S];
  int i,result[S];
  for(i=0;i<S;i++){
    printf("[No.%d]\n",i+1);
    printf("名前:");
    scanf("%s",name[i]);
    printf("出身地:");
    scanf("%s",hometown[i]);
      printf("\n");
  }
  while(1){
    printf("検索しますか？（yes or no）:");
    scanf("%s",retrieval);
    if(retrieval[0]=='y'){
      serch(name,hometown,result);
    }else{
      printf("終了\n");
      break;
    }
  }
  return 0;
}

void serch(char name[][N],char hometown[][N],int result[])
{
  int i,j,k=0,guess,num=0;
  char serch[N];
  printf("検索する都道府県名を入力して下さい:");
  scanf("%s",serch);
  for(i=0;serch[i]!='\0';i++){
    num++;
  }
  for(i=0;i<S;i++){
    for(j=0;j<num;j++){
      if(serch[j]==hometown[i][j]){
        guess=0;
      }else{
        guess=1;
        break;
      }
    }
    if(guess==0){
      result[k]=i;
      k++;
    }
  }
  show_result(name,hometown,result,k);
}

void show_result(char name[][N],char hometown[][N],int result[],int k)
{
  int i;
  printf("\n<検索結果>\n");
  if(k==0){
    printf("該当者なし\n");
  }else{
    for(i=0;i<k;i++){
      printf("[No.%d]  %s  %s\n",result[i]+1,hometown[result[i]],name[result[i]]);
    }
  }
  printf("\n");
}