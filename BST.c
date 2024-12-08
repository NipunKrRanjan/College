#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *addnode(int value)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->left=NULL;
    new->right=NULL;
    return new;
}
struct node *insertnode(int value,struct node *pnode)
{
    if(pnode==NULL)
    {
        return addnode(value);
    }
    else if(value>pnode->data)
    {
        pnode->right=insertnode(value,pnode->right);
    }
    else if(value<pnode->data)
    {
        pnode->left=insertnode(value,pnode->left);
    }
    return pnode;
}
void Inorder(struct node *root)
{
    struct node *ptr=root;
    if(ptr!=NULL)
    {
        Inorder(ptr->left);
        printf("%d ",ptr->data);
        Inorder(ptr->right);
    }
}
void Preorder(struct node *root)
{
    struct node *ptr=root;
    if(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        Preorder(ptr->left);
        Preorder(ptr->right);
    }
}
void Postoder(struct node *root)
{
    struct node *ptr=root;
    if (ptr!=NULL)
    {
        Postoder(ptr->left);
        Postoder(ptr->right);
        printf("%d ",ptr->data);
    }
    
}
int search(struct node *root,int data)
{
    struct node *temp=root;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            return 1;
        }
        else if (data>temp->data)
        {
            temp=temp->right;
        }
        else
        {
            temp=temp->left;
        }
    }
    return 0;
}
void main()
{
    int n;
    printf("Enter the number of elements to be enetered:\n");
    scanf("%d",&n);
    printf("Enter the elements of the BST:\n");
    int b;
    struct node *root=NULL;
    for (int i =0 ; i < n; i++)
    {
        scanf("%d",&b);
        root=insertnode(b,root);
    }
    int s;
    printf("Enter the number to be searched:\n");
    scanf("%d",&s);
    printf("The Inorder traversal of the tree is:\n");
    Inorder(root);
    printf("\n");
    printf("The Preoder traversal of the tree is:\n");
    Preorder(root);
    printf("\n");
    printf("The Postorder traversal of the tree is:\n");
    Postoder(root);
    printf("\n");
    int p=search(root,s);
    if(p)
    {
        printf("Element found");
    }
    else
        printf("Element not found.\n");
}