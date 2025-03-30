package Assignment;

import java.util.Scanner;

public class q10
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        String str=sc.nextLine();
        String s1="";
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)!=' ')
            {
                s1=s1+str.charAt(i);
            }
        }
        System.out.println("String after reomving white spaces:\n"+s1);
    }
}
