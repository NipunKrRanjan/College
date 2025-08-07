import java.util.Scanner;

public class qsort 
{
    static void sort(int arr[],int start,int end)
    {
        if(start<end)
        {
            int pivot = partition(arr,start,end);
            sort(arr,start,pivot-1);
            sort(arr,pivot+1,end);
        }
    }
    static int partition(int arr[],int start,int end)
    {
        int pivot = arr[end];
        System.out.println("Pivot Element in sorting:"+pivot);
        int i = (start-1);
        for(int j=start;j<end;j++)
        {
            if(arr[j]<=pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i+1];
        arr[i+1] = arr[end];
        arr[end] = temp;
        System.out.println("After one sort");
        for(int a=0;a<arr.length;a++)
        {
            System.out.println(arr[a]+" ");
        }
        return (i+1);
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the elements of the array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Original Array:");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]+" ");
        }
        sort(arr,0,n-1);
        System.out.println("Sorted Array:");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]+" ");
        }
    }
}
