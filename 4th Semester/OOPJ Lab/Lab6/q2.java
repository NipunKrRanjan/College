import java.io.*;
import java.util.Scanner;
public class q2
{
    public static void main(String[] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        account a1=new account();
        account a2=new account();
        account a3=new account();
        person p1=new person();
        person p2=new person();
        person p3=new person();
        int acc,adh;
        float bala;
        String na;
        System.out.println("For first person:");
        System.out.println("Enter account number:");
        acc=sc.nextInt();
        System.out.println("Enter balance:");
        bala=sc.nextFloat();
        a1.input(acc, bala);
        System.out.println("Enter name:");
        na=sc.next();
        System.out.println("Enter Aadhar number:");
        adh=sc.nextInt();
        p1.input(na, adh);
        p1.display();
        a1.display();
        System.out.println("For second person:");
        System.out.println("Enter account number:");
        acc=sc.nextInt();
        System.out.println("Enter balance:");
        bala=sc.nextFloat();
        a2.input(acc, bala);
        System.out.println("Enter name:");
        na=sc.next();
        System.out.println("Enter Aadhar number:");
        adh=sc.nextInt();
        p2.input(na, adh);
        p2.display();
        a2.display();
        System.out.println("For third person:");
        System.out.println("Enter account number:");
        acc=sc.nextInt();
        System.out.println("Enter balance:");
        bala=sc.nextFloat();
        a3.input(acc, bala);
        System.out.println("Enter name:");
        na=sc.next();
        System.out.println("Enter Aadhar number:");
        adh=sc.nextInt();
        p3.input(na, adh);
        p3.display();
        a3.display();
    }
}
class account
{
    int acc;
    float balance;
    void input(int a,float b)
    {
        acc=a;
        balance=b;
    }
    void display()
    {
        System.out.println("Account number: "+acc);
        System.out.println("Balance: "+balance);
    }
}
class person extends account
{
    String name;
    int aadharno;
    void input(String n,int a)
    {
        name=n;
        aadharno=a;
    }
    void display()
    {
        System.out.println("Name: "+name);
        System.out.println("Aadhar number: "+aadharno);
    }
}

