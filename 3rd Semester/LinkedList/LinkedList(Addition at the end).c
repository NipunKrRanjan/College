#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversing(struct node *ptr)
{
    int data;
    while(ptr!=NULL)
    {
        data=ptr->data;
        printf("Element:%d\n",data);
        ptr=ptr->next;
    }
}
void main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    //Linking first and second nodes
    head->data=7;
    head->next=second;

    //Linking second and third node
    second->data=11;
    second->next=third;

    //Linking third and null node
    third->data=9;
    third->next=NULL;

    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=13;
    third->next=temp;
    temp->next=NULL;
    
    traversing(head);
}