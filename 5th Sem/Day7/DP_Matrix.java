package Day7;

import java.util.Scanner;

public class DP_Matrix 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of matrices required:");
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the dimensions of the matrices");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        int[][] dp=new int[n][n];
        for(int len=2;len<n;len++)
        {
            for(int i=0;i<n-len;i++)
            {
                int j=i+len;
                dp[i][j]=Integer.MAX_VALUE;
                for(int k=i+1;k<j;k++)
                {
                    int cost=dp[i][k]+dp[k][j]+(arr[i]*arr[j]*arr[k]);
                    if(cost<dp[i][j])
                        dp[i][j]=cost;
                }
            }
        }
        System.out.println("Minimum Cost:"+dp[0][n-1]);
    }
}
