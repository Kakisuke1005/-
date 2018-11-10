#include<stdio.h>
#define DIM 3
void read_vector3D(double vector[]);
void outer_product3D(double vector1[], double vector2[], double vector3[]);
double inner_product3D( double vector1[], double vector2[]);

int main()
{
  double vector1[DIM],vector2[DIM],vector3[DIM],inner_product;
  int i;
  printf("ベクトル1の3成分を入力してください\n");
  read_vector3D(vector1);
  printf("ベクトル2の3成分を入力してください\n");
  read_vector3D(vector2);
  outer_product3D(vector1,vector2,vector3);
  printf("\n2つのベクトルに垂直なベクトル3（外積）は(");
  for(i=0;i<DIM;i++){
    printf("%.2f",vector3[i]);
    if((i==0)||(i==1)){
      printf(",");
    }
  }
  printf(")です\n\n");
  inner_product=inner_product3D(vector1,vector3);
  printf("入力ベクトル1とベクトル3の内積は%.2fです\n",inner_product);
  inner_product=inner_product3D(vector2,vector3);
  printf("入力ベクトル2とベクトル3の内積は%.2fです\n",inner_product);
  return 0;
}

void read_vector3D(double vector[])
{
  int i;
  for(i=0;i<DIM;i++){
    scanf("%lf",&vector[i]);
  }
}

void outer_product3D(double vector1[], double vector2[], double vector3[])
{
  vector3[0]=(vector1[1]*vector2[2]-vector1[2]*vector2[1]);
  vector3[1]=(vector1[2]*vector2[0]-vector1[0]*vector2[2]);
  vector3[2]=(vector1[0]*vector2[1]-vector1[1]*vector2[0]);
}

double inner_product3D( double vector1[], double vector2[])
{
  int i;
  double inner_product=0;
  for(i=0;i<DIM;i++){
    inner_product+=vector1[i]*vector2[i];
  }
  return inner_product;
}
