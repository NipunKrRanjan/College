package Assignment;

public class q14
{
    public static void main(String[] args)
     {
        int arr[]=new int[5];
        String str="";
        try 
        {
            int a=arr[6];
        } 
        catch (Exception e) 
        {
            System.out.println(e);
        } 
        try
        {
            int l=str.charAt(2);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally 
        {
            System.out.println("Both the exceptions are handled and caught");
        }
    }
}
