import java.io.*;
import java.util.Scanner;
public class q2 
{
    public static void main(String[] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int arr[][]=new int[3][];
        arr[0]=new int[3];
        arr[1]=new int[4];
        arr[2]=new int[5];
        int count=0;
        for(int i=0;i<arr.length;i++)
        {
            System.out.println("For row "+i+" enter elements:");
            for(int j=0;j<arr[i].length;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                count=count+arr[i][j];
            }
            System.out.println("Length of row "+i+" is: "+arr[i].length+" and the sum of elements is:"+count);
            count=0;
        }
        
    }
}
