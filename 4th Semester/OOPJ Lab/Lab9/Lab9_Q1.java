 class Parent 
 {
        void method() 
        throws Exception 
        {
            throw new Exception("Exception from Parent");
        }   
    }
    class Child1 extends Parent{}
    class Child2 extends Child1{}
    public class Lab9_Q1
     {
        public static void main(String args[])
         {
            try
            {
                new Child2().method();
            }
            catch(Exception e)
            {
                System.out.println("Caught: "+e.getMessage());
            }
        }
    }

