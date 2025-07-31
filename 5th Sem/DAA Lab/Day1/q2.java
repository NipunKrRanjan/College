//Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size,
package Day1;

import java.util.Scanner;

public class q2 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        int prefixSum[]=new int[n];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        prefixSum[0]=arr[0];
        for(int i=1;i<arr.length;i++)
        {
            prefixSum[i]=prefixSum[i-1]+arr[i];
        }
        System.out.println("Prefix Sum of array is:");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(prefixSum[i]);
        }
    }
}
