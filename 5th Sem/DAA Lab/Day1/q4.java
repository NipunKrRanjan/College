//Write a function to ROTATE_RIGHT (p1, p2) right an array for first p2 
//elements by 1 position using EXCHANGE (p, q) function that swaps/exchanges the numbers p
//&amp; q. Parameter p1 be the starting address of the array and p2 be the number of elements to be
//rotated.
package Day1;

import java.util.Scanner;

public class q4 
{
    public static void main(String[] args) 
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
        System.out.println("Enter the number of elements to be rotated:");
        int p2=sc.nextInt();
        System.out.println("Array before rotation:");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");
        for(int i=p2-1;i>0;i--)
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;            
        }
        System.out.println("Array after rotation:");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
