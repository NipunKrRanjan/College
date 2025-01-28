#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
int IsEmpty()
{
    if(front==NULL&&rear==NULL)
    return 1;
    else
    return 0;
}
struct node *Enqueue(int num)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    if(IsEmpty())
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
    rear->next=front;
}
int Dequeue()
{
    if(IsEmpty())
    {
        printf("The circular queue is empty\n");
    }
    else
    {
        struct node *temp=front;
        front=front->next;
        int a=temp->data;
        rear->next=front;
        free(temp);
        return a;
    }
}
void traversal()
{
    if(IsEmpty())
    {
        printf("The  circular queue is empty\n");
    }
    else
    {
        printf("The elements of circular queue are:\n");
        struct node *ptr=rear->next;
        do
        {
               printf("%d ",ptr->data);
               ptr=ptr->next;
        } while (ptr!=rear->next); 
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of elements to be  inserted in the queue: ");
    scanf("%d",&n);
    int a;
    printf("Enter the elements of the circular queue:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        Enqueue(a);
    }
    int  b=Dequeue();
    traversal();
    printf("The dequeued element is:%d\n",b);
    printf("After dequeuing,");
    traversal();
    return 0;
}
