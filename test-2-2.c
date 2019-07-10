//2-2:韩信点兵
#include<stdio.h>

int main()
{
  int a, b, c, kase = 0;

  while (scanf("%d%d%d", &a, &b, &c) != EOF)
  {
    int s = 0;
    for (int i = 10; i <= 100; i++)
    {
      if (i%3 == a && i%5 == b && i%7 == c)
      {
        s = i;
        break;
      } 
    }
    if (s != 0)
    {
      printf("Case %d: %d\n", ++kase, s);
    } else {
      printf("Case %d: No answer\n", ++kase);
    }
  }
  
  return 0;
}