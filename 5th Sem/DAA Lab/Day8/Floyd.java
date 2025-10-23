package Day8;
import java.util.*;
public class Floyd 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of vertices:");
        int n=sc.nextInt();
        int[][] dist=new int[n][n];
        for(int i=0;i<n;i++)
        {
            System.out.println("For vertice no.:"+(i+1));
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    System.out.println("Enter the weight of node no."+(j+1)+"(if no path exist give value as 100000000)");
                    dist[i][j]=sc.nextInt();
                }
                else
                    dist[i][i]=0;
            }
        }
        for(int i=0;i<n;i++)//Every node is taken to be as intermediate
        {
            for(int j=0;j<n;j++)//Every node is taken as source
            {
                for(int k=0;k<n;k++)//Every node is taken as destination
                {
                    if(dist[j][i]!=100000000 && dist[i][k]!=100000000)
                        dist[j][k]=Math.min(dist[j][k],dist[j][i]+dist[i][k]);
                }
            }
        }
        System.out.println("The shortest distance matrix is as follows:");
        for(int i=0;i<n;i++)
        {
            System.out.print("|");
            for(int j=0;j<n;j++)
            {
                System.out.print(dist[i][j]+" ");
            }
            System.out.print("|");
            System.out.println();
        }
    }
}
