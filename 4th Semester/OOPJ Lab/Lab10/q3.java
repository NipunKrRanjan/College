import java.io.*;
public class q3 
{
    public static void main(String[] args)throws IOException 
    {
        FileReader fr=new FileReader("C:\\Users\\KIIT0001\\Desktop\\OOPJ Lab\\Lab10\\file.txt");
        int i;
        while((i=fr.read())!=-1)
        {
            System.out.print(Character.toUpperCase((char)i));
        }
        fr.close();
    }
}
