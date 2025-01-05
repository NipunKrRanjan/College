//Check for odd number without using modulus//
package Lab3;

public class q2
 {
     public static void main(String[] args) 
    {
        int val=550;
        while(val>=0)
        {
            if(val==1)
            {
                System.out.println("Odd Number");
            }
            else if(val==0)
            {
                System.out.println("Even Number");
            }

            val=val-2;
        }   
    }   
}
