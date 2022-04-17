#include <stdio.h>
#include <stdlib.h>

typedef struct stru_node
{
    struct stru_node *next;
    char v;
} node;

node* pop(node *head)
{
    node *new_head;
    new_head = head->next;
    free(head);
    return new_head;
}

node* push (node *head, int e)
{
    node *new_head;
    new_head = (node *) malloc(sizeof(node));
    new_head->v=e;
    new_head->next=head;
    return new_head;
}

node* destroy(node* head)
{
    while (head!=NULL)
        head = pop(head);
    return head;
}

void print(node *head)
{
    node* aux;
    for (aux=head;aux!=NULL;aux=aux->next)
        printf("%d\n",aux->v);
    return;
}

node *res(node* head)
{
  node *rev_head = NULL, *aux;
  for (aux=head;aux!=NULL;aux=aux->next)
    rev_head = push(rev_head,aux->v);
  return rev_head;
}

int is_equal(node *h1, node *h2)
{
  node *aux1, *aux2;
  for (aux1=h1,aux2=h2;aux1!=NULL;aux1=aux1->next,aux2=aux2->next)
    if (aux1->v!=aux2->v) return 0;
  return 1;
}

int main()
{
    char n = getchar();
    node* head=NULL, *rev_head;
    while (n!='\n')
    {
        head = push(head, n);
        n = getchar();
    }
    rev_head = res(head);
    if (is_equal(head,rev_head)==0) printf("no\n");
    else printf("yes\n");
    destroy(head);
    destroy(rev_head);
    return 0;
}
