#include<stdio.h>
int main()
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
    int tmatrix1[c1][3];
    int tmatrix2[c2][3];
    int k1=0,k2=0;
    //for 3 tuple of matrix 1 and matrix 2//
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix1[i][j]!=0)
            {
                tmatrix1[k1][0]=i;
                tmatrix1[k1][1]=j;
                tmatrix1[k1][2]=matrix1[i][j];
                k1++;
            }
            if(matrix2[i][j]!=0)
            {
                tmatrix2[k2][0]=i;
                tmatrix2[k2][1]=j;
                tmatrix2[k2][2]=matrix2[i][j];
                k2++;
            }
        }
    }
    //Declaring the sum of the matrices//
    int sum[c1+c2][3];
    int m1=0,m2=0,m3=0;//Indices for matrix 1, matrix 2, matrix 3//
    while(m1<c1&&m2<c2)
    {
        if(tmatrix1[m1][0]==tmatrix2[m2][0])//Checking if the row values are equal are equal or not
            {
                if(tmatrix1[m1][1]==tmatrix2[m2][1])
                {
                    sum[m3][0]=tmatrix1[m1][0];
                    sum[m3][1]=tmatrix1[m1][1];
                    sum[m3][2]=tmatrix1[m1][2]+tmatrix2[m2][2];
                    m1++;
                    m2++;
                } 
                else
                {
                    if(tmatrix1[m1][1]<tmatrix2[m2][1])
                    {
                        sum[m3][0]=tmatrix1[m1][0];
                        sum[m3][1]=tmatrix1[m1][1];
                        sum[m3][2]=tmatrix1[m1][2];
                        m1++;
                    }
                    else
                    {
                        sum[m3][0]=tmatrix2[m2][0];
                        sum[m3][1]=tmatrix2[m2][1];
                        sum[m3][2]=tmatrix2[m2][2];
                        m2++;
                    }
                }     
            }
        else
        {
            if(tmatrix1[m1][0]<tmatrix2[m2][0])
            {
                sum[m3][0]=tmatrix1[m1][0];
                sum[m3][1]=tmatrix1[m1][1];
                sum[m3][2]=tmatrix1[m1][2];
                m1++;
            }
            else
            {
                sum[m3][0]=tmatrix2[m2][0];
                sum[m3][1]=tmatrix2[m2][1];
                sum[m3][2]=tmatrix2[m2][2];
                m2++;
            }
        }
        m3++;
    }
    printf("The sum of the sparse matrix is:\nRow\tColumn\tValue\n");
    for(int i=0;i<m3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}