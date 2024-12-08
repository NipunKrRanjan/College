#include<stdio.h>
#include<stdlib.h>
struct node
{
    float coef;
    int expo;
    struct node *next;
    /* data */
};
struct node traversal(struct node *head)
{
    struct node *ptr=head;
        printf("The polynomail is:");
        while (ptr!=NULL)
        {
            printf("%.1fx^%d",ptr->coef,ptr->expo);
            ptr=ptr->next;
            if(ptr!=NULL)
             printf("+");
            else
            printf("\n");
            /* code */
        }    
}
struct node *link(struct node *head,float cf,int ep)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->coef=cf;
    temp->expo=ep;
    temp->next=NULL;
    struct node *ptr=head;
    if (head==NULL||cf>ptr->coef)
    {
        temp->next=ptr;
        ptr=temp;
        /*code */
    }
    else
    {
        while (ptr->next!=NULL && cf<ptr->next->expo)
        {
            ptr=ptr->next;
            /* code */
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return ptr;  
}
void main()
{
    int n;
    float c;
    int e;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter the coefficient of element number %d:",i+1);
        scanf("%f",&c);
        printf("Enter the exponential power of the term:");
        scanf("%d",&e);
        head=link(head,c,e);
    }
    traversal(head);
}
