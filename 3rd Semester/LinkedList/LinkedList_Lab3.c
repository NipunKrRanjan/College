#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* traverse(struct node *head)
{
	struct node *ptr,*p,*pt;
	ptr=head;
	printf("The elements of the linked list are:\n");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
struct node* search(struct node *head)
{
    struct node *p,*pt;
	p=head;
	pt=head;
	int n,ne;
	int no=0;
	printf("Enter element to be searched:");
	scanf("%d",&n);
	while(p!=NULL)
	{
		no++;
		int a=p->data;
	 	if(a==n)
	 	{
	 		printf("Element found at node no:%d\n",no);
	 		printf("Enter the new value to be updated:");
	 		scanf("%d",&ne);
	 		p->data=ne;
	 	}
	 	p=p->next;
	}
	printf("After updation,");
    traverse(pt);
    return pt;
}
struct node* insertionfirst(struct node *head)
{	
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    struct node *ptr;
    ptr=head;
    printf("Enter the value to be inserted at the begining of the linked list:");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
    ptr=head;
    printf("After insertion at beginning,");
    traverse(ptr);
}
struct node* insertionend(struct node *head)
{	
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted at the end of the linked list:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
    	ptr=ptr->next;
    }
    ptr->next=temp;
    ptr=head;
    printf("After insertion at the end,");
    traverse(ptr);
    return ptr;
}
struct node* insertionbw(struct node *head)//Error//
{
    int ps;
    printf("Enter the index after which element should be added:\n");
    scanf("%d",&ps);
    struct node *ptr,*temp,*p;
    ptr=head;
    p=head;
    printf("Enter the value to be added:");
    scanf("%d",&temp->data);
    for(int i=1;i!=ps-1;i++)
    {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    printf("After insertion in between,");
    traverse(head);
}
struct node* deletionfirst(struct node *head)
{
    struct node *ptr1,*p1,*ptr2,*p2;
    ptr1=head;
    ptr2=head;
    p2=head->next;
    head=head->next;
    free(ptr1);
    p1=head;
    printf("After deletion of first,");
    traverse(p1);
}
struct node* deletionbw(struct node *head)
{
    int index;
    struct node *p,*q;
    p=head;
    q=head->next;
    printf("Enter the index at which the number is to be deleted:\n");
    scanf("%d",&index);
    if(index==1)
    {
        deletionfirst(head);
    }
    else
    {
    for(int i=1;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    printf("After deletion in between,");
    traverse(head);
    }
}
struct node* deletionend(struct node *head)//Error
{
    struct node *p,*ptr;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(p);
    printf("After deletion,at end");
    traverse(head);
}
struct node* reversal(struct node *head)
{
    int *arr;
    arr=(int*)malloc(4*sizeof(int));
    int i=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        arr[i]=ptr->data;
        ptr=ptr->next;
        i++;
    }
    printf("The reverse of the array:\n");
    for(int i=3;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    int n;
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=19;
    second->next=third;

    third->data=21;
    third->next=fourth;

    fourth->data=23;
    fourth->next=NULL;
    struct node *ptr;
    //traverse(head);//CORRECT//
    //ptr=search(head);//CORRECT//
    //reversal(ptr);//CORRECT//
    insertionbw(head);
    //insertionfirst(head);//CORRECT//
    //insertionend(head);//CORRECT//
    //deletionbw(head);//CORRECT//
    //deletionfirst(head);//CORRECT//
    //deletionend(head);
}