#include <stdio.h>
#include <stdlib.h>

typedef struct stru_node
{
    struct stru_node *next;
    int v;
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

int main()
{
    int n;
    node* head=NULL;
    scanf("%d",&n);
    while (n!=0)
    {
        head = push(head, n);
        scanf("%d",&n);
    }
    head = pop(head);
    head = pop(head);
    print(head);
    destroy(head);
    return 0;
}
