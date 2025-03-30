package Assignment;

import java.util.Scanner;

public class q9 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String 1:");
        String str=sc.nextLine();
        System.out.println("Enter String 2:");
        String str2=sc.nextLine();
        if(str.compareToIgnoreCase(str2)==0)
        {
            System.out.println("Strings are equal.");
        }
        else
        {
            System.out.println("Strings are not equal.");
        }
    }
}
