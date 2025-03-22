import java.util.Scanner;
public class q1
{
    public static void main(String[] args) 
    {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter a string:");
       String str=sc.nextLine();
       System.out.println("Enter a choice:\n1:To change case of string\n2:Reverse the string\n3:Compare two strings\n4:Insert one string to another string\n5:Convert to upper case anf lower case\n6:the character is present in the string and at which position\n7:Check whether the string is palindrome or not.\n8:Check the number of word, vowel and consonant in the string\n");
       int ch=sc.nextInt();
       int ch1;
       switch(ch)
       {
        case 1:
            System.out.println("Enter 1 to convert to upper case and 2 to convert to lower case:");
            ch1=sc.nextInt();
            switch (ch1)
             {
                case 1:
                    System.out.println(str.toUpperCase());
                    break;
                case 2:
                    System.out.println(str.toLowerCase());
                    break;
                default:
                    break;
            }
            break;
        case 2:
            String rev="";
            for(int i=str.length()-1;i>=0;i--)
            {
                rev=rev+str.charAt(i);
                System.out.println("Reversed String:"+rev);

            }
            break;
        case 3:
            System.out.println("Enter another string for completion:");
            String str1=sc.nextLine();
            System.out.println(str.compareTo(str1));
            break;
        case 4:
            System.out.println("Enter another string to be concatenated:");
            String str2=sc.nextLine();
            System.out.println("The concated string:"+str.concat(str2));
            break;
        case 5:
            System.out.println("After converting to upper case:"+str.toUpperCase());
            System.out.print("After converting to lower case:"+str.toLowerCase());
            break;
        case 6:
            System.out.println("Enter charachter to be searched:");
            char ch2=sc.nextLine().charAt(0);
            int Check=0;
            for(int i=0;i<str.length();i++)
            {
                if(str.charAt(i)==ch2)
                {
                    System.out.println("Charachter found at position:"+(i+1));
                    Check=1;
                }
                if(Check==0)
                 System.out.println("Charachter not found");
            }
            break;
        case 7:
        String rev1="";
        for(int i=str.length()-1;i>=0;i--)
        {
            rev1=rev1+str.charAt(i);
        }
        if(rev1.equals(str))
            System.out.println("String palindrome");
        else
            System.out.println("String is not palindrome");
        break;
        case 8:
        int word=1,vowel=0,consonant=0,digit=0;
        str=str.toLowerCase();
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)==' ')
                word++;
            else if(str.charAt(i)>=97 && str.charAt(i)<=122)
            {
                if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u')
                vowel++;
                else
                consonant++;
            }
            else
             digit++;
        }
        System.out.println("No.of vowels="+vowel+"\nNo. of consonants="+consonant+"\nNo. of words:"+word+"\nNo. of Digits:"+digit);
        break;
        default:
            break;
       } 

    }
}
