/*

!!! ATENCAO !!!

E possivel que isto esteja mal feito (nao entendo o que eles querem dizer
com nao precisa de tratar de casos especificos do calculo de mediana).

Ainda assim, acho que se a lista so tiver numeros impares (o caso mais facil
da mediana), entao esta certo

*/

#include <stdio.h>

int mediana(int v[], int size)
{
  int c, freq[21]={0},k=0,mediana;
  for (c=0;c<size;c++)
    freq[v[c]]+=1;
  c=0;
  if (size%2==1)
  {
    while (k<size/2+1)
    {
      k+=freq[c];
      mediana=c;
      c++;
    }
  }
  else
  {
    while (k<size/2)
    {
      k+=freq[c];
      mediana=c;
      c++;
    }
  }
  return mediana;
}

int main()
{
  int notas[2] = {20,1}, size=2;
  printf("%d\n",mediana(notas,size));
  return 0;
}
