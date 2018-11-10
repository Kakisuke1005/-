#include<stdio.h>
#define SIZE 10
int main()
{
  int array[SIZE],i,j,k,l,m,search_data,small_num=0,large_num=0,equal_num=0;
  int small[SIZE],large[SIZE],equal[SIZE];
  for(i=0;i<SIZE;i++){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&array[i]);
  }
  printf("\n検索用データを入力してください: ");
  scanf("%d",&search_data);
  for(j=0;j<SIZE;j++){
    if(array[j]<search_data){
      small[small_num]=array[j];
      small_num++;
    }
    if(array[j]==search_data){
      equal[equal_num]=array[j];
      equal_num++;
    }
    if(array[j]>search_data){
      large[large_num]=array[j];
      large_num++;
    }
  }
  printf("\n検索結果\n");
  printf("検索データ: %d\n",search_data);
  printf("検索データより小さいデータ: ");
  for(k=0;k<small_num;k++){
    printf("%d",small[k]);
    if(k<small_num-1){
      printf(",");
    }
  }
  printf("\n");
  printf("検索データと等しいデータ: ");
  for(l=0;l<equal_num;l++){
    printf("%d",equal[l]);
    if(l<equal_num-1){
      printf(",");
    }
  }
  printf("\n");
  printf("検索データより大きいデータ: ");
  for(m=0;m<large_num;m++){
    printf("%d",large[m]);
    if(m<large_num-1){
      printf(",");
    }
  }
  printf("\n");
  return 0;
}

