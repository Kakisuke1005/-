#include<stdio.h>
#include<math.h>
double distance(int x1, int y1, int x2, int y2);

int main(void)
{
    double x1,x2,y1,y2,y;
    printf("＜点1＞\n");
    printf("x座標：");
    scanf("%lf",&x1);
    printf("y座標：");
    scanf("%lf",&y1);
    printf("＜点2＞\n");
    printf("x座標：");
    scanf("%lf",&x2);
    printf("y座標：");
    scanf("%lf",&y2);
    printf("＜2点間の距離＞\n");
    y=distance(x1,y1,x2,y2);   
    printf("距離：%f\n",y);
    return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
    double distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}