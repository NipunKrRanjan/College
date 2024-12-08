#include<stdio.h>
#include<stdlib.h>
int queue[100];
int front=-1;
int rear=-1;
void traversal()
{
    int r=rear;
    int f=front;
    for(int i=r;i!=f-1;i--)
    {
        printf("%d\n",queue[i]);
    }
}
int IsFull(int size)
{
    if(rear==size-1)
     return 1;
    else
     return 0;
}
int IsEmpty()
{
    if(front==-1||rear==-1)
     return 1;
    else 
     return 0;
}
void enqueue(int data,int size)
{
    if(IsFull(size))
     printf("Queue overflow\n");
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=data;
    }
}
int dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        int a=queue[front];
        front++;
        return a;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements to be entered:\n");
    scanf("%d",&n);
    int num;
    printf("Enter the elements of queue:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        enqueue(num,n);
    }
    printf("The elements of the queue are:\n");
    traversal();
    int el=dequeue();
    printf("The dequeued element is:%d\n",el);
}
