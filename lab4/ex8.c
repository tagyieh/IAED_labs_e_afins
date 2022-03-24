#include <stdio.h>
#define MAX 100

int main()
{
  char n1[MAX], n2[MAX];
  int c=0;
  scanf("%s%s",n1,n2);
  while (n1[c]!='\0')
  {
    if (n1[c]>n2[c])
    {
      printf("%s\n",n1);
      return 0;
    }
    else if (n2[c]>n1[c])
    {
      printf("%s\n",n2);
      return 0;
    }
    c++;
  }
  return 0;
}
