/*
I (10 val.) Considere o tipo Node definido em baixo que representa o nó de uma lista ligada de
inteiros.

      typedef struct node {
        int value;
        struct node *next;
      } Node;
      
Implemente a função int count(Node* head, int val) que recebe um ponteiro para o
início da lista e um valor val e retorna o número de ocorrências do valor val na lista.
*/

int count(Node *head, int val)
{
  Node *aux;
  int total = 0;
  for (aux=head;aux!=NULL;aux=aux->head)
    if (aux->value==val) total++;
  return total;
}
