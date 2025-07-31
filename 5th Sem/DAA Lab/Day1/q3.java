//Write a program to read ‘n’ integers from a disc file that must contain some duplicate values and store them into an array. Perform the following operations on the
//array. 
//a) Find out the total number of duplicate elements. 
//b) Find out the most repeating element in the array.
package Day1;

import java.util.Scanner;

public class q3 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        int pre[]=new int[n];
        int k=0;
        System.out.println("Enter the elements of array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Duplicate elements are:");
        int maxf=0;
        for(int i=0;i<arr.length;i++)
        {
            int fq=0;
            for(int j=0;j<arr.length;j++)
            {
                if(arr[j]==arr[i])
                    fq++;
            }
            int p=0;
            if(fq>1)
            {
                for(int a=0;a<n;a++)
                {
                    if(pre[a]==arr[i])
                    {
                        p=1;
                        break;
                    }
                }
                if(p==0)
                {
                    pre[k]=arr[i];
                    k++;
                    System.out.println(arr[i]);
                }
            }
            if(fq>maxf)
                maxf=i;
        }
        System.out.println("Element with maximum frequency is: "+arr[maxf]);
    }
}
