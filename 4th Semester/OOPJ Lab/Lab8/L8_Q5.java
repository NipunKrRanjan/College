public class L8_Q5 
      {
    public static void main(String args[]) {
        try {
            int a = 25/0; //Arithmetic Exception
        }
        catch(ArithmeticException e) {
            System.out.println(e);
        }

        try {
            String s = null;
            System.out.println(s.length()); //NullPointer Exception
        }
        catch(NullPointerException e) {
            System.out.println(e);
        }

        try {
            int arr[] = new int[3];
            arr[5] = 10; //ArrayIndexOutOfBounds Exception
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }

        finally {
            System.out.println("Finally block is executed");
        }


    }
    
}
