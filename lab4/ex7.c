#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c)
{
  int k=0;
  while (s[k]!='\0')
  {
    if (s[k]!=c)
      putchar(s[k]);
    k++;
  }
  printf("\n");
}

int main()
{
  char s[MAX], v;
  int c=0;
  while ((v=getchar())!='\n'&&v!=EOF)
  {
    s[c]=v;
    c++;
  }
  s[c]='\0';
  v = getchar();
  apagaCaracter(s,v);
  return 0;
}
