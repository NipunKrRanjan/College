#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);
    int matrix1[r][c];
    int matrix2[r][c];
    printf("Enter the elements of matrix 1:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    int sum[r][c];
    int c1=0,c2=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix1[i][j]!=0)
            {
                c1++;
            }
            if(matrix2[i][j]!=0)
            {
                c2++;
            }
        }
    }
    if(c1<(r*c/2)&&c2<(r*c/2))
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        int k=0;
        int count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(sum[i][j]!=0)
                count++;
            }
        }
        int sparse[count][3];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(sum[i][j]!=0)
                {
                    sparse[k][0]=i;
                    sparse[k][1]=j;
                    sparse[k][2]=sum[i][j];
                    k++;
                }
            }
        }
        printf("The sum in 3-tuple format is:\nRow\tColumn\tValue:\n");
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",sparse[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Please enter a sparse matrix");
}