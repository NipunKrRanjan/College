#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertion(int n);
struct node* traverse(struct node *head)
{
    struct node *ptr=head;
    printf("The elements of the array:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    insertion(n);
}
void insertion(int n)
{
    struct node *fnode,*snode,*ptr;
    int num;
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
    traverse(fnode);
}
