#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *traversal(struct node *top)
{
    struct node *ptr=top;
    printf("The elements of the stack are:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next; 

    }
}
int IsEmpty(struct node *top)
{
    struct node *ptr=top;
    if(ptr==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top,int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
    return top;
}
int pop(struct node *top)
{
    if(IsEmpty(top))
    {
        printf("Empty Linked List.\n");
        return 0;
    }
    else
    {
        struct node *temp=top;
        int x=temp->data;
        top=temp->next;
        free(temp);
        printf("After poping,");
        traversal(top);
        return x;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements to be entered:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        top=push(top,a);
    }
    traversal(top);
    int el=pop(top);
    printf("The poped element is:%d\n",el);
    //traversal(top);
    return 0;
}
