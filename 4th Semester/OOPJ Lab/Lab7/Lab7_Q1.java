import java.util.Scanner;
interface employee
{
    void getDetails();
    void displayEmployeeDetails();
}
interface manager extends employee
{
    void getDeptDetails();
}
class head implements manager
{
    String name;
    int id,did;
    String dept;
    @Override
    public void getDetails()
    {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the name of the employee: ");
            name=sc.nextLine();
            System.out.println("Enter the employee ID: ");
            id=sc.nextInt();
    }
    @Override
    public void getDeptDetails()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the name of department:");
        dept=sc.nextLine();
        System.out.println("Entet the department ID:");
        did=sc.nextInt();
    }
    public void displayEmployeeDetails()
    {
        System.out.println("Employee ID:"+id);
        System.out.println("Employee Name:"+name);
        System.out.println("Departmeent ID:"+did);
        System.out.println("Department Name:"+dept);
    }
}
public class Lab7_Q1
{
    public static void main(String[] args) 
    {
        head h=new head();
        h.getDetails();
        h.getDeptDetails();
        h.displayEmployeeDetails();
        
    }
}
