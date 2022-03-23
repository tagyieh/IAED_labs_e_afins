#include <stdio.h>
#define ID_CLIENTE 15
#define NOME 100
#define MORADA 100
#define MAX_NUM_TEL 10
#define DIGITOS 9
#define CODIGO 50
#define MAX_CHAMADAS 1000

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

typedef struct
{
  Data data_chamada;
  float duracao;
  char numero_destino[DIGITOS];
} Chamada;

typedef struct
{
  char numero[DIGITOS];
  char codigo[CODIGO];
  float preco_minuto;
  Chamada ut_mensal[MAX_CHAMADAS];
} Telefone;

typedef struct
{
  char id_cliente[ID_CLIENTE];
  char nome[NOME];
  char morada[MORADA];
  Telefone max_numeros[MAX_NUM_TEL];
} Cliente;

float valorTotal (Telefone t[], int n)
{
  Chamada ch;
  int c, k;
  float total=0;
  for (c=0;c<n;c++)
  {
    for (k=0;k<MAX_CHAMADAS;k++)
    {
      ch=t[c].ut_mensal[k];
      total+=ch.duracao*t[c].preco_minuto;
    }
  }
  return total;
}

int main()
{
  /*Telefone a = {"967849123","ABC",1.1,{{{21,01,2022}, 2, "967849123"}}};
  Telefone b = {"967849123","ABC",2.5,{{{21,01,2022}, 2, "967849123"},{{21,01,2022}, 3, "967849123"}}};*/
  Telefone t[2] = {{"967849123","ABC",1.1,{{{21,01,2022}, 2, "967849123"}}},
                {"967849123","ABC",2.5,{{{21,01,2022}, 2, "967849123"},{{21,01,2022}, 3, "967849123"}}}};
  printf("%f\n",valorTotal(t,2));
  /*output correto = 14.7*/
  return 0;
}
