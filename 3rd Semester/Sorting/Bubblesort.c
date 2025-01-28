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
    for (int i = 0; i < n-1; i++)
    {
        for (int j= 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            /* code */
        }
        
    }
    printf("The sorted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
    