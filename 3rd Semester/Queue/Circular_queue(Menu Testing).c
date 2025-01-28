#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int queue[10];
int IsFull(int size) 
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
void enqueue(int size,int data)
{
    if(IsEmpty()) 
    {
        front = 0;
        rear = 0;
    } 
    else if (rear == size - 1 && front != 0) 
    {
        rear = 0;
    } 
    else 
    {
        rear = (rear + 1) % size;
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
int traverse(int size)
{
    if(IsEmpty())
    {
        printf("The queue is empty.\n");
    }
    else
    {
        printf("The elements of the array:\n");
        int temp=front;
        do
        {
            printf("%d\n",queue[temp]);
            temp=(temp+1)%size;
            /* code */
        } while (temp!=((rear+1)%size));
        return 0;
    }
}
void main()
{
    int n;
    printf("Enter the size of the queue:\n");
    scanf("%d",&n);
    int en,dq,inpchk=0;
    for(int i=0;i>=0;i++)
    {
        int ch;
        printf("Enter choice:\n1 for Enqueuing\n2 for Dequeuing\n3 for traversal\n4 for exit\n****************\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        if(inpchk<n)
        {
            if(IsFull(n))
            {
                 printf("Queue is full.\n");
                break;
            }
            else
            {
                printf("Enter the element to be enqueued:\n");
                scanf("%d",&en);
                enqueue(n,en);
            }
            inpchk++;
        }
        else
        {
            printf("No more enqueuing is allowed.\n");
            continue;
        }
        break;
        case 2:
            if(!IsEmpty())
            {
                int dq=dequeue(n);
                printf("The dequeued element is:%d\n",dq);
                inpchk--;
            }
            else
            {
                printf("The queue is empty.\n");
            }
        break;
        case 3:
        traverse(n);
        break;
        default:
            break;
        }
        if(ch==4)
        {
            printf("***********THANK YOU***********");
            break;
        }
    }
}