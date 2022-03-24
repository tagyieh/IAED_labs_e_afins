#include <stdio.h>
#define MAX 80

int leLinha(char s[])
{
  int i=0;
  while (s[i]!='\0')
  {
    putchar(s[i]);
    i++;
  }
  putchar('\n');
  return i;
}

int main()
{
  char s[MAX], v;
  int i=0;
  while((v=getchar())!='\n' && v!=EOF)
  {
    s[i] = v;
    i++;
  }
  s[i] = '\0';
  leLinha(s);
  return 0;
}
