#include <stdio.h>
#define VECMAX 100

int main()
{
  int n, v[VECMAX], contador, contador2;
  scanf("%d",&n);
  if (n<VECMAX)
  {
    for (contador=0;contador<n;contador++)
    {
      scanf("%d",&v[contador]);
    }
    for (contador=0;contador<n;contador++)
    {
      for (contador2=0;contador2<v[contador];contador2++)
        putchar('*');
      putchar('\n');
    }
  }
  return 0;
}
