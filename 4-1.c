#include<stdio.h>
double rectangle(double base, double height);

int main(void)
{
  double area,base,height;
  while(1){
    printf("底辺：");
    scanf("%lf",&base);
    if(base>=0){
      break;
    }else{
      printf("0より大きい値を入力してください\n");
  }
  }
  while(1){
    printf("高さ：");
    scanf("%lf",&height);
    if(height>=0){
      break;
    }else{
      printf("0より大きい値を入力してください\n");
  }
  }
  area=rectangle(base,height);
  printf("面積：%.2f\n",area);
  return 0;
}

double rectangle(double base, double height)
{
  double area;
  area=base*height;
  return area;
}

