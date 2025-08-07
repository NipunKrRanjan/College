import java.util.Scanner;

public class insort 
{
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
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
            System.out.println("After one loop:");
            for(int a=0;a<n;a++)
                System.out.println(arr[a]+" ");
        }
        System.out.println("Sorted Array:");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]+" ");
        }
    }
}
