#include<stdio.h>
int main(void)
{
  int akosu,okosu;
  double asum,awari,osum,owari;
  printf("りんごの個数：");
  scanf("%d",&akosu);
  printf("みかんの個数：");
  scanf("%d",&okosu);
  if(akosu>=10){
    awari=0.1;
  }
  if(akosu>=20){
    awari=0.2;
  }
  if(okosu>=10){
    owari=0.2;
  }
  if(((akosu<10)&&(okosu<10))&&(akosu+okosu>=10)){
    awari=0.05;
    owari=0.05;
  }
  asum=(akosu*100)*(1-awari);
  osum=(okosu*50)*(1-owari);
  printf("＜りんご＞\n");
  printf("単価　：100円\n");
  printf("個数　：%d個\n",akosu);
  printf("割引率：%.0f%%\n",awari*100);
  printf("りんごの合計金額：%.1f円\n",asum);
  printf("＜みかん＞\n");
  printf("単価　：50円\n");
  printf("個数　：%d個\n",okosu);
  printf("割引率：%.0f%%\n",owari*100);
  printf("みかんの合計金額：%.1f円\n",osum);
  printf("＜合計＞\n");
  printf("合計金額：%.1f円\n",asum+osum);
  return 0;
}
