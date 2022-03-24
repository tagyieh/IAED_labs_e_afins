#include <stdio.h>
#define MAX 80

void maiusculas(char s[])
{
  int c=0, k='A'-'a';
  while (s[c]!='\0')
  {
    if (s[c]>='a'&&s[c]<='z')
      s[c]+=k;
    c++;
  }
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
  maiusculas(s);
  printf("%s\n",s);
  return 0;
}
