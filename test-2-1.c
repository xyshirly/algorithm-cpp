//2-1: 水仙花数
#include<stdio.h>

int main ()
{
  //方法一
  for(int i = 100; i <= 999; i++) {
    int n1 = i/100, n2 = i/10%10, n3 = i%10;
    int s = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
    if (i == s) printf("%d ", s);
  } 
  printf("\n");

  //方法二
  /* int m=0, n=0;
  for(int i = 1; i <=9; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 9; k++) {
        m = i*100 + j* 10 + k;
        n = i*i*i + j*j*j + k*k*k;
        if (m == n) {
          printf("%d ", m);
        }
      }
    }
  }
  printf("\n"); */
  return 0;
}