int count(Node *head, int val)
{
  Node *aux;
  int total = 0;
  for (aux=head;aux!=NULL;aux=aux->head)
    if (aux->value==val) total++;
  return total;
}
