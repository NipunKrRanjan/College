interface Printble
{
    void show();   
}
public class L8_Q3
{
    public static void main(String[] args)
    {
        Printble p=new Printble() 
        {
            public void show()
            {
                System.out.println("Anonymous Class being Called");
            }
        };
        p.show();
    }
}
