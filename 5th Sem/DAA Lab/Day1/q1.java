//Write a program to find out the second smallest and second largest
//element stored in an array of n integers.
package Day1;

import java.io.IOException;
import java.util.Scanner;

public class q1 
{
    public static void main(String[] args)throws IOException 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of n:");
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the elements of array:");
        for (int idx = 0; idx < arr.length; idx++) 
        {
            arr[idx]=sc.nextInt();    
        }
        int l=largest(arr);
        int s=smallest(arr); 
        System.out.println("Largest number:"+l);
        System.out.println("Smallest number:"+s);
        int sl=slargest(arr, l);
        int ssm=Ssmallest(arr, s);
        System.out.println("Second largest number:"+sl);
        System.out.println("Second smallest number:"+ssm);
    }
    static int largest(int arr[])
    {
        int l=arr[0];
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>l)
                l=arr[i];
        }
        return l;
    }
    static int smallest(int arr[])
    {
        int l=arr[0];
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<l)
                l=arr[i];
        }
        return l;
    }
    static int slargest(int arr[],int l)
    {
        int sl=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]!=l)
            {
                if(arr[i]>sl)
                    sl=arr[i];
            }
        }
        return sl;
    }
    static int Ssmallest(int arr[],int s)
    {
        int ss=Integer.MAX_VALUE;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<ss && arr[i]>s)
                ss=arr[i];
        }
        return ss;
    }
}
