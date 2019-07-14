//3-5: Tex中的引号问题
#include<stdio.h>

int main()
{
  int c, q = 1;
  while ((c = getchar()) != EOF)
  {
    if (c == '"') { printf("%s", q ? "``" : "''"); q = !q; }
    else printf("%c", c);    
  }
  return 0;
}