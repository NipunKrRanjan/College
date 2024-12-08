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
    if (head==NULL||cf<ptr->coef)
    {
        temp->next=ptr;
        ptr=temp;
        /*code */
    }
    else
    {
        while (ptr->next!=NULL && cf>ptr->next->expo)
        {
            ptr=ptr->next;
            /* code */
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return ptr;  
}
struct node *sum(struct node *head1,struct node *head2)
{
    struct node *s;
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    while (ptr1!=NULL&&ptr2!=NULL)
    {
        if(ptr1->expo==ptr2->expo)
        {
            s=link(s,(ptr1->coef+ptr2->coef),ptr1->expo);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if (ptr1->expo>ptr2->expo)
        {
            s=link(s,ptr1->coef,ptr1->expo);
            ptr1=ptr1->next;
            /* code */
        }
        else if(ptr1->expo<ptr2->expo)
        {
            s=link(s,ptr2->coef,ptr2->expo);
            ptr2=ptr2->next;
        }
    }
    while(ptr1!=NULL)
    {
        s=link(s,ptr1->coef,ptr1->expo);
        ptr1=ptr1->next;
    }
    while (ptr2!=NULL)
    {
        s=link(s,ptr2->coef,ptr2->expo);
        ptr2=ptr2->next;/* code */
    }
    return s;
}
void main()
{
    int n;
    float c;
    int e;
    printf("For Polynomial 1:\n");
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    struct node *head1=(struct node*)malloc(sizeof(struct node));
    head1=NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter the coefficient of element number %d:",i+1);
        scanf("%f",&c);
        printf("Enter the exponential power of the term:");
        scanf("%d",&e);
        head1=link(head1,c,e);
    }
    printf("The first polynomial is:\n");
    traversal(head1);
    printf("For Polynomial 2:\n");
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    struct node *head2=(struct node*)malloc(sizeof(struct node));
    head2=NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter the coefficient of element number %d:",i+1);
        scanf("%f",&c);
        printf("Enter the exponential power of the term:");
        scanf("%d",&e);
        head2=link(head2,c,e);
    }
    printf("The second polynomial is:\n");
    traversal(head2);
    printf("\n");
    struct node *s=sum(head1,head2);
    traversal(s);
}
