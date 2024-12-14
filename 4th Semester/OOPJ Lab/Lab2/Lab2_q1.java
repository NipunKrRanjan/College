class Faculty
{
    int empid;
    String name;
    void getdetails(int id,String na)
    {
        empid=id;
        name=na;
    }
    void showdetails()
    {
        System.out.println("Employee ID:"+empid+" Name:"+name);
    }
}
public class Lab2_q1 {
    public static void main(String[] args){
        Faculty f1=new Faculty();
        Faculty f2=new Faculty();
        f1.getdetails(343,"Nipun");
        f2.getdetails(344, "Krishna");
        f1.showdetails();
        f2.showdetails();
    }
}
