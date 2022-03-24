#include <stdio.h>
#define VECMAX 100

int main()
{
  int max=0, v[VECMAX], contador, k,n;
  scanf("%d",&n);
  if (n<VECMAX)
  {
    for (contador=0;contador<n;contador++)
    {
      scanf("%d",&v[contador]);
      if (v[contador]>max)
        max = v[contador];
    }
    for (contador=max;contador>=1;contador--)
    {
      for (k=0;k<n;k++)
      {
        if (v[k]>=contador)
          putchar('*');
        else
          putchar(' ');
      }
      putchar('\n');
    }
  }
  return 0;
}
