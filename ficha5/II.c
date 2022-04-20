/*
II (10 val.) Considere o tipo Node definido na pergunta I.
Implemente, a função Node* insertLast(Node* head, int val) que recebe um ponteiro
para o início de uma lista de inteiros e insere um novo elemento com valor val na última posição
da lista. A função devolve um ponteiro para o início da lista alterada.
*/


Node* insert_last(Node *head, int val)
{
  Node *new = (node *) malloc(sizeof(node));
  Node *aux;
  new->next = NULL;
  new->value = val;
  if (head==NULL)
  {
    head = new;
    return head;
  }
  for (aux=head;aux->next!=NULL;aux=aux->next);
  aux->next = new;
  return head;
}
