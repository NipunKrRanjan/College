package Assignment;

import java.util.Scanner;

public class q8
 {
     public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int vowel=0,consonant=0;
        System.out.println("Enter a string");
        String str=sc.nextLine();
        String rev1="";
        for(int i=str.length()-1;i>=0;i--)
        {
            rev1=rev1+str.charAt(i);
        }
        if(rev1.equals(str))
            System.out.println("String palindrome");
        else
            System.out.println("String is not palindrome");
    }
}
