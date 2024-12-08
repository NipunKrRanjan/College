#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* traverse(struct node* head)
{
    struct node* ptr;
    ptr=head;
    printf("The elements are:\n");
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
        /* code */
    } while (ptr!=head);
}
struct node* search(struct node *head)
{
    struct node* ptr;
    ptr=head;
    int a;
    printf("Enter the number to be searched:\n");
    scanf("%d",&a);
    int i=0,n=0;
    do
    {
        i++;
        if(ptr->data==a)
        {
            printf("Element found at node number:%d\n",i);
            n++;
        }
        ptr=ptr->next;
        /* code */
    } while (ptr!=head);
    if (n==0)
    {
        printf("The element is not found\n");
        /* code */
    }
    
}
struct node* addst(struct node *head)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number to be inserted at the start:\n");
    scanf("%d",&temp->data);
    struct node *ptr,*p;
    ptr=head;
    p=head->prev;
    temp->prev=p;
    temp->next=ptr;
    ptr->prev=temp;
    p->next=temp;
    head=temp;
    printf("After insertion at starting,");
    traverse(head);
}
struct node* addbw(struct node *head)
{
    struct node *ptr,*p,*temp;
    int n;
    printf("Enter the node at which element is to inserted:\n");
    scanf("%d",&n);
    if(n==1)
    {
        addst(head);
    }
    else
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element to be inserted:\n");
        scanf("%d",&temp->data);
        ptr=head;
        //p=head->next;
        for(int i=1;i<n-1;i++)
        {
            ptr=ptr->next;
        }
        temp->prev=ptr;
        temp->next=ptr->next;
        ptr->next->prev=temp;
        ptr->next=temp;
        printf("After insertion in between,");
        traverse(head);
    }
}
struct node* deletionst(struct node *head)
{
    struct node *ptr,*p,*nex;
    ptr = head;
    p = head->prev;
    nex = ptr->next;
    p->next = nex;
    nex->prev = p;
    free(ptr);
    head=nex;
    printf("After deletion,");
    traverse(head);
}
struct node* deletionbw(struct node *head)
{
    struct node *ptr,*p;
    ptr=head;
    int pos;
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    for (int  i = 0; i < pos-1; i++)
    {
        ptr=ptr->next;
        /* code */
    }
    p=ptr->next;
    ptr->next=p->next;
    p->next->prev=ptr;
    free(p);
    traverse(head);
}
struct node* deletionend(struct node *head)
{
    struct node *ptr,*p,*h;
    ptr=head;
    p=head->next;
    do
    {
        p=p->next;
    } while (p->next!=head);
    ptr->prev=p->prev;
    p->prev->next=p->next;
    free(p);
    printf("After deletion at end, ");
    traverse(head);
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
    printf("After reversal,");
    traverse(temp);
}
int main()
{
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    struct node *fnode,*snode,*ptr;
    printf("Enter the elements of the linked list:\n");
    fnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&fnode->data);
    fnode->prev=NULL;
    fnode->next=NULL;
    ptr=fnode;
    for(int i=2;i<=n;i++)
    {
        snode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&snode->data);
        snode->prev=ptr;
        snode->next=NULL;
        ptr->next=snode;
        ptr=ptr->next;
        if(i==n)
        {
            fnode->prev=snode;
            snode->next=fnode;
        }
    }
    traverse(fnode);//Sucess
    search(fnode);//Sucess
    reverse(fnode);
    addst(fnode);//Sucess
    addbw(fnode);//Sucess
    additionend(fnode);
    deletionst(fnode);//Sucess
    deletionbw(fnode);//Sucess
    deletionend(fnode);//Sucess
}