#include <stdio.h>
#define MAX 100

void troca(char s[])
{
  int v=0,k='A'-'a';
  while(s[v]!='\0')
  {
    if (s[v]>='a'&&s[v]<='z')
      s[v]+=k;
    v++;
  }
}

int main()
{
  char s[MAX] = {"IAED: desde 1989"};
  troca(s);
  printf("%s\n",s);
  return 0;
}
