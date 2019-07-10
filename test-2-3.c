//2-3:倒三角
#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 9; j++)
    {
      if (j >= i && j <= (2*n-i)) {
        printf("#");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}