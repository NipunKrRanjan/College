package Day5;

import java.util.Scanner;

public class knapsack 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the total number of elements:");
        int n=sc.nextInt();
        Double[] weight=new Double[n];//For storing weight of each element
        Double[] profit=new Double[n];//For storing profit made by selling each element
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter weight of element no.:"+(i+1));
            weight[i]=sc.nextDouble();
            System.out.println("Enter profit of element number:"+(i+1));
            profit[i]=sc.nextDouble();
        }
        Double[] ppw=new Double[n];//For storing profit per weight made by selling each element
        for(int i=0;i<n;i++)
            ppw[i]=profit[i]/weight[i];
        System.out.println("Enter the maximum weight of knapsack");
        Double max=sc.nextDouble();
        //Sorting weight and profit on the basis of Pro/Wei
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(ppw[j]>ppw[j+1])
                {
                    //PPW
                    Double temp1=ppw[j];
                    ppw[j]=ppw[j+1];
                    ppw[j+1]=temp1;

                    //Weight
                    Double temp2=weight[j];
                    weight[j]=weight[j+1];
                    weight[j+1]=temp2;

                    //Profit
                    Double temp3=profit[j];
                    profit[j]=profit[j+1];
                    profit[j+1]=temp3;
                }
            }
        }
        Double pro=0.0;
        for(int i=0;i<n;i++)
        {
            if(max!=0)
            {
                if(weight[i]<=max)
                {
                    pro+=profit[i];
                    max-=weight[i];
                }
                else
                {
                    pro+=(max*ppw[i]);
                    max=0.0;
                }
            }
        }
        System.out.println("Maximum Profit="+pro);
        sc.close();
    }
}
