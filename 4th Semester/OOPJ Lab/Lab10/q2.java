package Lab10;
import java.io.*;
public class q2
{
    public static void main(String[] args) throws Exception
     {
        InputStreamReader r = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(r);
        System.out.println("Enter a string:");
        String str = br.readLine();
        while (str.compareToIgnoreCase("Stop") != 0)
         {
            String rev = "";
            for (int i = str.length() - 1; i >= 0; i--) 
            {
                rev = rev + str.charAt(i);
                System.out.println("Reversed String:" + rev);

            }
            System.out.println("Enter a string:");
            str = br.readLine();
        }
        System.out.println("User entered stop");

    }
}
