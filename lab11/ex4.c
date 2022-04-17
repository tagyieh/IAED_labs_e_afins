#include <stdlib.h>
#include <stdio.h>

typedef struct str_node
{
  struct str_node *next, *previous;
  char c;
} node;

typedef struct
{
  struct str_node *head, *last;
} list;

list *mk_list()
{
  list *l = (list *) malloc(sizeof(list));
  l->head=NULL;
  l->last=NULL;
  return l;
}

void free_list(list *l)
{
  node *aux;
  while (l->head!=NULL)
  {
    aux = l->head;
    l->head=aux->next;
    free(aux);
  }
  free(l);
  return;
}

void add_last(list *l, char c)
{
  node *aux, *new_node = (node *) malloc(sizeof(node));
  if (l->head==NULL)
  {
    l->head = new_node;
    new_node->previous = NULL;
    new_node->c = c;
    l->last = new_node;
    return;
  }
  for(aux=l->head;aux->next!=NULL;aux=aux->next);
  aux->next = new_node;
  new_node->previous = aux;
  new_node->c = c;
  l->last = new_node;
}

int is_paly(const list *ls)
{
  node *end, *beg;
  for (end=ls->last,beg=ls->head;beg!=NULL;end=end->previous,beg=beg->next)
    if (end->c!=beg->c) return 0;
  return 1;
}

int main()
{
  list *l = mk_list();
  char c;
  while ((c=getchar())!='\n')
    add_last(l,c);
  if (is_paly(l)==0) printf("no\n");
  else printf("yes\n");
  free_list(l);
  return 0;
}
