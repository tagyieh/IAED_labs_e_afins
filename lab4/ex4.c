#include <stdio.h>
#define MAX 80
int main()
{
  char s[MAX], v;
  int i=0,contador;
  while((v=getchar())!=EOF && v!='\n')
  {
    s[i]=v;
    i++;
  }
  s[i]='\0';
  for (contador=0;contador<i/2;contador++)
  {
    if (s[contador]!=s[i-contador-1])
    {
      printf("no\n");
      return 0;
    }
  }
  printf("yes\n");
  return 0;
}
