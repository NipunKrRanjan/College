public class Lab9_Q4 
{ 
	static void m() 
	{ 
		int data = 50 / 0;  
	} 
	static void n() 
	{ 
		m();  
	} 

	static void p() 
	{ 
		try
        { 
			n(); 
		} 
		catch (Exception e)
        { 
			System.out.println("Exception handled"); 
		} 
	} 
    public static void main(String args[]) 
	{ 
	    p(); 
		System.out.println("Normal flow..."); 
	} 
} 

