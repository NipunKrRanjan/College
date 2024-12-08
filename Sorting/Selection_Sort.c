#include<stdio.h>
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
    for (int i = 0; i<n-1; i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}