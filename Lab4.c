#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *traverse(struct node *head)
{
    struct node *ptr=head;
    printf("The elements of the linked list are:\n");
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
}

struct node *additionend(struct node *head)
{
    struct node *temp,*ptr,*p;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element to be added:");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    ptr=head;
    p=head;
    while(ptr->next!=head)
    {
    	ptr=ptr->next;
    }
    temp->next=p;
    p->prev=temp;
    ptr->next=temp;
    temp->prev=ptr;
    traverse(head);
}

struct node *reverse(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    struct node *temp=head;
    do
    {
        p->next=p->prev;
        p->prev=q;
        temp=temp->next;
        p=temp;
        q=temp->next;
    }while(temp!=head);
    temp=temp->next;
    traverse(temp);
}

int main()
{
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    struct node *fnode,*snode,*ptr;
    printf("Enter the elements of linked list:\n");
    fnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&fnode->data);
    fnode->prev=NULL;
    fnode->next=NULL;
    ptr=fnode;
    for (int  i = 2; i <=n; i++)
    {
        snode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&snode->data);
        snode->next=NULL;
        snode->prev=ptr;
        ptr->next=snode;
        ptr=ptr->next;
        if(i==n)
        {
            snode->next=fnode;
            fnode->prev = snode;
        }
    }
    traverse(fnode);
    additionend(fnode);
    reverse(fnode);
    return 0;
}