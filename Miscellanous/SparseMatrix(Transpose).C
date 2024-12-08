#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,c;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    printf("Enter the number of columns:\n");
    scanf("%d",&c);
    int matrix[r][c];
    int transpose[c][r];
    printf("Enter the elements of the meatrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int n=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]!=0)
            {
                n++;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("The three tuple format of the tranpose matrix is:\nRow\tColumn\tValue\n");
    int triplet[n][3];
    int k=0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; ++)
        {
            if(transpose[i][j]!=0)
            {
                triplet[k][0]=i;
                triplet[k][1]=j;
                triplet[k][2]=transpose[i][j];
                k++;
            }
        } 
    } 
    for (int i = 0; i < n; i++)
    {
       for (int j= 0;j<3; j++)
       {
            printf("%d",triplet[i][j]);
       }
       printf("\n");
    }
    
}