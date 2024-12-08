#include<stdio.h>
#include<stdlib.h>
void merge(int left[],int right[],int arr[],int l,int r)
{
    int i=0,j=0,k=0;
    while(i<l && j<r)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<l)
    {
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<r)
    {
        arr[k]=right[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int n)
{
    if(n<2)
    {
        return;
    }
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++)
    {
        left[i]=arr[i];
    }
    int k=0;
    for (int i =mid; i <n; i++)
    {
        right[k]=arr[i];
        k++;
        /* code */
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(left,right,arr,mid,n-mid);
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
    printf("\n");
    mergesort(arr,n);
    printf("The sorted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
