#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int queue[10];
int traverse(int size)
{
    printf("The elements of the array:\n");
    int temp=front;
    do
    {
        printf("%d\n",queue[temp]);
        temp=(temp+1)%10;
        /* code */
    } while (temp!=((rear+1)%10));
    //Kyuki Rear ka position(Rear+1)%size se calculate hota hai isiliye temp aur rear ka position equal nahi ho jaye,isiliye yeh waala condition
    return 0;
}
int IsFull() 
{
    if((rear+1)%10==front)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}   
int IsEmpty()
{
    if (front == -1&&rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int data)
{
    if(IsEmpty()) 
    {
        front = 0;
        rear = 0;
    } 
    else if (rear == 10 - 1 && front != 0) 
    {
        rear = 0;
    } 
    else 
    {
        rear = (rear + 1) % 10;
    }
    queue[rear] = data;
}
int dequeue(int size)
{
        int a=queue[front];
        if(front==0 && rear==0)
        {
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
        return a;
}
void main()
{
    int n;
    printf("Enter the size of the queue:\n");
    scanf("%d",&n);
    printf("Enter the elements of the queue:\n");
    int b;
    for (int i = 0; i < n; i++)
    {
        if(IsFull())
        {
            printf("Queue is full.\n");
            break;
        }
        else
        {
        scanf("%d",&b);
        enqueue(b);
        /* code */
        }
    }
    traverse(n);
    if(!IsEmpty())
    {
    int a=dequeue(n);
    printf("The dequeued element is:%d\n",a);
    }
    else
    {
        printf("The queue is empty.\n");
    }
}