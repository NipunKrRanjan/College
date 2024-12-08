#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter the no. of rows and columns:");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]!=0)
            count++;
        }
    }
    if(count>(r*c/2))
        printf("Entered matrix is not a sparse matrix\n");
    else
    {
        printf("The formed matrix is :\n");
        for(int i=0;i<r;i++)
        {
             for(int j=0;j<c;j++)
            {
            printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
        printf("The compact sparse matrix is:\n");
        printf("Row\tColumn\tValue\n");
        int sparse[count][3];
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]!=0)
                {
                    sparse[k][0]=i;
                    sparse[k][1]=j;
                    sparse[k][2]=matrix[i][j];
                    k++;
                }
            }
        }
        
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",sparse[i][j]);
            }
            printf("\n");
        }
    }

}