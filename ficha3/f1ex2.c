#include <stdio.h>
#define MAX 10

int moda()
{
  int v[MAX]={0}, t,moda=0,maior=0,c;
  scanf("%d",&t);
  while(t>=0)
  {
    v[t]+=1;
    scanf("%d",&t);
  }
  for (c=0;c<MAX;c++)
  {
    if(v[c]>maior)
    {
      moda=c;
      maior=v[c];
    }
  }
  return moda;
}

int main()
{
  int a = moda();
  printf("%d\n",a);
  return 0;
}
