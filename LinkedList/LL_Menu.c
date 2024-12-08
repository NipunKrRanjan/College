//CSE-6 Lab//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert(struct node *head)
{
    int n;
    struct node *p,*temp;
    p=head;
    printf("Enter the position at which the node is to be inserted:");
    scanf("%d",&n);
    printf("Enter the value to be inserted:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(n==1)
    {
        temp->next=p;
        p=temp;
        return head;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
        return head;
    }
}
struct node* deletion(struct node *head)
{   
    int n;
    struct node *p,*temp,*q,ptr;
    p=head;
    q=head->next;
    printf("Enter the position at which the node is to be deleted:");
    scanf("%d",&n);
    printf("Enter the value to be inserted:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(n==1)
    {
        ptr=head;
        head=head->next;
        free(ptr);
        return head;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        return head;
    }
}
struct node* count(struct node *head)
{
    int n=0;
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        n++;
        ptr=ptr->next;
    }
    printf("The number of nodes are:%d",n);
}
struct node* traverse(struct node *head)
{
    struct node *ptr=head;
    printf("The elements of the linked list:\n");
    while(ptr->next!=NULL)
    {
        printf("%d\n",ptr->data);
    }
}
void main()
{
    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    struct node *fnode,*snode,*ptr;
    fnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements of the linked list:\n");
    scanf("%d",&fnode->data);
    fnode->next=NULL;
    ptr=fnode;
    for(int i=2;i<=n;i++)
    {
        snode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&snode->data);
        snode->next=NULL;
        ptr->next=snode;
        ptr=ptr->next;
    }
    for(int i=1;i>0;i++)
    {
        int ch;
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        if(ch==5)
        {
            break;
        }
        else
        switch (ch)
        {
        case 1:
        insert(fnode);
        break;
        case 2:
        deletion(fnode);
        case 3:
        break;
        count(fnode);
        break;
        case 4:
        traverse(fnode);        
        default:
            break;
        }
    }
}