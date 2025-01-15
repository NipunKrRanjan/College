
import java.io.IOException;
import java.util.Scanner;
public class q3 {
    public static void main(String[] args)throws IOException
     {
        Scanner sc=new Scanner(System.in);
        int arr[][]=new int[3][3];
        int sum1,sum2;
        System.out.println("Enter the elements of the matrix:");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        sum1=arr[0][0]+arr[1][1]+arr[2][2];
        sum2=arr[0][2]+arr[1][1]+arr[2][0];
        System.out.println("Sum of the elements of the first diagonal is: "+sum1);
        System.out.println("Sum of the elements of the second diagonal is: "+sum2);
    }
}
