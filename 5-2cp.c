#include <stdio.h>
int main(void)
{
  int i;
  int i_data;
  printf("数を入力してください:"); scanf("%d", &i_data);
  if(i_data <= 10) {
    int total = 0;
    int count = 0;
    for(i=0; i <= i_data; i++) {
      total = total + count;
      count = count + 1;
    }
    printf("Total No.1: %d \n", total); /* 1 */
    printf("Total No.2: %d \n", total); /* 2 */
  } else{
    printf("値は 10 以下ではありません.\n"); }
  return 0;
}
