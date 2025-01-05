public class q1 
{
    public static void main(String[] args) 
    {
        double unit,bill;
        unit=300.0;
        if(unit<=50.0)
        {
            bill=unit*50.0;
        }
        else if(unit<=150)
        {
            bill=50*0.5+(unit-100)*0.75;
        }
        else if (unit<=250)
        {
            bill=50*0.5+100*0.75+(unit-100)*1.20;
        }
        else
        {
            bill=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
        }
        bill=bill+(bill*0.2);
        System.out.println("Bill:"+bill);
    }
}
