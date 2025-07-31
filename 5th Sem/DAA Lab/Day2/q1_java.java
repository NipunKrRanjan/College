package Day2;

import java.io.IOException;
import java.util.Scanner;

public class q1_java 
{
    static int i=0;
    static String binary="";
    public static void main(String[] args)throws IOException 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        System.out.println("Number in binary(16-bit format):");
        if(n==0)
            System.out.println("0");
        else
        {
            binary(n);
            for (int idx = 0; idx < 16-binary.length(); idx++) 
                System.out.print("0");
            for(int a=binary.length()-1;a>=0;a--)
                System.out.print(binary.charAt(a));
        }
    }
    static void binary(int n)
    {
        if(n==0)
            return;
        else
        {
            binary += String.valueOf(n % 2);
            n=n/2;
            i++;
            binary(n);
        }
    }
}
