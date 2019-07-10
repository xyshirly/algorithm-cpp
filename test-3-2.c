//3-2:开灯问题
#include<stdio.h>
#define maxn 1010
int a[maxn];

int main()
{
  int n, k;
  
  scanf("%d%d", &n, &k);

  for (int i = 1; i <= n; i++)
  {
    a[i] = 0;
  }
  
  for (int j = 1; j <= k; j++)
  {
    for (int k = 1; k <= n; k++)
    {
      if ( k%j == 0)
      {
        a[k] = !a[k];
      }
    }
  }

  //寻找所有即记录为1的编号
  for (int i = 1; i <= n; i++)
  {
    if (a[i]) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}