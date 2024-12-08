//MAX HEAPIFY

#include<stdio.h>
#include<stdlib.h>
int queue[10];
int rear=-1;
int front=-1;
int IsFull()
{
    if(rear==10-1)
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
void enqueue(int data)
{
    if(IsFull())
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
        if (front > rear) {
            front = rear = -1;  // Reset when queue is empty
        }
        return a;
    }
}
int heapfiy(int arr[],int i,int n)
{
    int la=i;
    int l=(2*i)+1;//left child
    int r=(2*i)+2;//right child

    if(l<n && arr[l]>arr[la])
    {
        la=l;
    }
    if (r<n && arr[r]>arr[la])
    {
        la=r;
    }
    if(la!=i)
    {
        int temp=arr[la];
        arr[la]=arr[i];
        arr[i]=temp;
        heapfiy(arr,la,n);
    }
}
void main()
{
    int n;
    printf("Enter the number of elements to be enetered:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the queue:");
    for (int i = 0; i <n; i++)
    {
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for (int i=(n/2)-1;i=0;i--)
    {
        heapfiy(arr,i,n);
        /* code */
    }
    for (int i = n - 1; i > 0; i--)
    {  // Move current root to end
        int temp = arr[0]; 
        arr[0] = arr[i];
        arr[i] = temp;

        // Call max heapify on the reduced heap
        heapfiy(arr,0,i);
    }
    printf("The sorted array (max heap sorted): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //For enqueing in the queue
    for (int  i =n-1; i >=0; i--)
    {
        enqueue(arr[i]);
        /* code */
    }
    //For printing the queue
    printf("The queue is:");
    for (int i = 0; i < n; i++)
    {
        int a=dequeue();
        printf("%d ",a);
        /* code */
    }
}