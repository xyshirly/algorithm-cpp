//2-4:子序列的和
#include<stdio.h>

int main()
{
  int n, m, kase = 0, temp;
  double s = 0;

  while(scanf("%d%d", &n, &m) != EOF && m != 0 && n != 0)
  {
    //如果n > m，交换位置
    if (n > m) {
      temp = n;
      n = m;
      m = temp;
    }

    for(int i = n; i <= m; i++)
    {
      s = s + (1.0/(i*i));  //此处的 1 为陷阱
    }
    printf("Case %d: %.5lf\n", ++kase, s);
  }

  return 0;
}