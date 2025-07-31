#include<stdio.h>
#include<stdlib.h>

int gcd_recursive(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd_recursive(b, a % b);
}
int main()
{
    int n1, n2;
    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter second number:");
    scanf("%d", &n2);
    int result = gcd_recursive(n1, n2);
    printf("GCD of the numbers = %d\n", result);
    return 0;
}