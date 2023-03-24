#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};

void insert(struct node **head,int val)
{
    struct node *new=malloc(sizeof(struct node));
    new->val=val;
    new->next=NULL;

    if(*head==NULL)
    {
        *head=new;
        return;
    }
    // 1 3 5
    struct node *curr=*head,*prev=0;
    
    while(curr && val>curr->val)
    {
        prev=curr;
        curr=curr->next;
    }
    
    if(curr==*head)
    {
        new->next=*head;
        *head=new;
    }
    else
    {
        new->next=curr;
        prev->next=new;
    }
    
    
}

void printall(struct node *curr)
{
    while(curr)
    {
        printf("%d ",curr->val);
        curr=curr->next;
    }
    
    printf("\n");
    
}
int main()
{
    //printf("Hello World");
    struct node *head=NULL;
    
    insert(&head,1);
    insert(&head,3);
    insert(&head,5);
    insert(&head,7);
    
    printall(head);

    return 0;
}
