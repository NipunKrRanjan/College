#include<stdlib.h>
#include<stdio.h>
int str[16];
int i=0;
void binary(int n)
{
    if(n==0)
        return;
    else
    {
        str[i]=n%2;
        n=n/2;
        i++;
        binary(n);
    }
}
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number in binary:\n");
    if(n==0)
        printf("0\n");
    else
    {
        binary(n);
        for(int a=15;a>=0;a--)
            printf("%d",str[a]);
        printf("\n");
    }
}