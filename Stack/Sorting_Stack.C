#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];//Original Stack
int temp_stack[MAX];//Sorted Stack
int top=-1;//original stack
int top_temp=-1;//sorted stack
void push_stack(int data)
{
    
    if(top==MAX-1)
    {
        printf("Stack overflow");
        return;
    }
    else
    {
    top++;
    stack[top]=data;
    }
}
void push_tempstack(int data)
{
    
    if(top_temp==MAX-1)
    {
        printf("Stack overflow");
        return;
    }
    top_temp=top_temp+1;
    temp_stack[top_temp]=data;
}
int pop_stack()
{
    int val;
    val=stack[top];
    top--;
    return val;
}
int pop_tempstack()
{
    int val;
    val=temp_stack[top_temp];
    top_temp--;
    return val;
}
void sort()
{
    while(top!=-1)
    {
        int num=pop_stack();
        while(top_temp!=-1 && temp_stack[top_temp]<num)
        {
            push_stack(pop_tempstack());         
        } 
        push_tempstack(num);
    }
}
int main()
{int n;
    printf("Enter the elements of the stack:\n");
    for (int i = 0; i< MAX; i++)
    {
        
        scanf("%d",&n);
        push_stack(n);
        /* code */
    }
    sort();
    printf("The sorted stack is:\n");
    while(top_temp!=-1)
    {
        printf("%d\n",temp_stack[top_temp]);
        top_temp--;
    }
    return 0;
}