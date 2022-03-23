#include <stdio.h>

double polyval(double pol[],int size, double x)
{
  int c1, c2;
  double p=1, t=0;
  for (c1=0;c1<size;c1++)
  {
    p*=pol[c1];
    for (c2=1;c2<=c1;c2++)
      p*=x;
    t+=p;
    p=1;
  }
  return t;
}

int main()
{
  int size=3;
  double pol[3] = {1,3,2}, x=2, a;
  a = polyval(pol,size,x);
  printf("%f\n",a);
  return 0;
}
