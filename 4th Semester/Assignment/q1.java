package Assignment;

abstract class BankAccount
{
    abstract void withdraw(double amount);
}
class SavingsAccount extends BankAccount
{
    void withdraw(double withdraw)
    {
        System.out.println("Inside withdraw of SavingsAccount\nWithraw="+withdraw);
    }
}
class CurrentAccount extends BankAccount
{
    void withdraw(double withdraw)
    {
        System.out.println("Inside withdraw of CurrentAccount\nWithdraw="+withdraw);
    }
}
public  class q1
{
    public static void main(String[] args)
    {
        SavingsAccount s1=new SavingsAccount();
        s1.withdraw(1000);
        CurrentAccount c1=new CurrentAccount();
        c1.withdraw(2000);
    }
}
