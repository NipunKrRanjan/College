#include<stdio.h>
#include<stdlib.h>
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
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The orginal array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i=(n/2)-1;i=0;i--)
    {
        heapfiy(arr,i,n);
    }
    //The logic for heap sort which states that we replace the last element with the first element of the array and then heapfiy it
    for(int i=n-1;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapfiy(arr,0,i);//arr-> for passing the array, 0-> for the root node , i-> for the last node
    }
    printf("\nThe sorted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}