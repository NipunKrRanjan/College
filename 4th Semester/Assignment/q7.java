package Assignment;

import java.util.Scanner;

public class q7 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int vowel=0,consonant=0;
        System.out.println("Enter a string");
        String str=sc.nextLine();
        str=str.toLowerCase();
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>=97 && str.charAt(i)<=122)
            {
                if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u')
                vowel++;
                else
                consonant++;
            }
        }
        System.out.println("No. of vowels in the string are:"+vowel);
        System.out.println("No.of consonants in the string are:"+consonant);
    }
}
