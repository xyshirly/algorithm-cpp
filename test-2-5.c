//2-5:分数化小数
#include<stdio.h>

int main()
{
  int c, kase = 0;
  float a, b;

  while (scanf("%f%f%d", &a, &b, &c) != EOF && a != 0 && b != 0 && c != 0)
  {
    printf("Case %d: %.*f\n", ++kase, c, a/b);
  }

  return 0;
}