#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct stru_node {
    struct stru_node *next;
    char *v;
} node;

node* pop(node *head)
{
    node *aux = head;
    head = aux->next;
    free(aux->v);
    free(aux);
    return head;
}

node* push(node* head, char* e)
{
    int t = strlen(e);
    char *v = (char*) malloc(sizeof(char)*(t+1)); 
    node* new = (node *) malloc(sizeof(node));
    strcpy(v,e);
    new->v=v;
    new->next=head;
    return new;
}

node* destroy(node *head)
{
    node *aux;
    while (head!=NULL)
        head = pop(head);
    return NULL;
}

void print(node *head)
{
    node* aux;
    for (aux=head;aux!=NULL;aux=aux->next)
        printf("%s\n",aux->v);
}

int main()
{
    node *head = NULL;
    char buffer[1000];
    scanf("%s",buffer);
    while (strcmp(buffer,"x"))
    {
        head = push(head, buffer);
        scanf("%s",buffer);
    }
    head = pop(head);
    print(head);
    destroy(head);
    return 0;
}
