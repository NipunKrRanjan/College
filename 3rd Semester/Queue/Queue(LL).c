#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    /* data */
};
struct node *front=NULL;
struct node *rear=NULL;
int IsEmpty()
{
    if(front==NULL||rear==NULL)
    return 1;
    else
    return 0;
}
void enqueue(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
int dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is empty");
    }
    else
    {
        int a;
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp=front;
        a=temp->data;
        front=front->next;
        free(temp);
        return a;
    }
}
void traversal()
{
    if(IsEmpty())
     printf("Empty Queue\n");
    else
    {
        struct node *ptr=front;
        printf("The elements of queue are:\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
void main()
{
    int n;
    printf("Enter the number of elements to be entered in queue:\n");
    scanf("%d",&n);
    printf("Enter the elements of the queue are:\n");
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        enqueue(a);
    }
    traversal();
    int el=dequeue();
    printf("The element popped out:%d\n",el);
}
