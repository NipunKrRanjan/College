// Only for processes with different arrival time
#include<stdio.h>
#include<stdlib.h>
struct process
{
    int a_time;
    int b_time;
    int pno;
    int completion_time;
    int tat;
    int wt;
    struct process *next;
};
void main()
{
    struct process *fnode,*ptr;
    int n;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    fnode=(struct process*)malloc(sizeof(struct process));
    printf("For process 1:\n");
    printf("Enter the arrival time:");
    scanf("%d",&fnode->a_time);
    printf("Enter the burst time:");
    scanf("%d",&fnode->b_time);
    fnode->pno=1;
    fnode->next=NULL;
    ptr=fnode;
    for(int i=2;i<=n;i++)
    {
        struct process *snode=(struct process*)malloc(sizeof(struct process));
        printf("For process no. %d:\n",i);
        printf("Enter the arrival time:");
        scanf("%d",&snode->a_time);
        printf("Enter the burst time:");
        scanf("%d",&snode->b_time);
        snode->pno=i;
        snode->next=NULL;
        ptr->next=snode;
        ptr=ptr->next;
    }  
    struct process *temp=fnode;
    int ready[n];
    int a=0;
    while (temp!=NULL)
    {
        ready[a]=temp->a_time;
        a++;
        temp=temp->next;
        /* code */
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ready[j]>ready[j+1])
            {
                int temp=ready[j];
                ready[j]=ready[j+1];
                ready[j+1]=temp;
            }
        }
    }
    temp=fnode;
    int j=0;
    int time=0,ct=0;
    while (j<n)
    {
        while(temp!=NULL)
        {
            if(temp->a_time==ready[j])
            {
                temp->completion_time=ct+temp->b_time;
                ct=temp->completion_time;
                temp->tat=temp->completion_time-temp->a_time;
                temp->wt=temp->tat-temp->b_time;
                break;
            }
            temp=temp->next;
        } 
        temp=fnode;
        j++;
         /* code */
    }
    temp=fnode;
    int i=1;
    while (temp!=NULL)
    {
        printf("For process no. %d:\n",i);
        printf("Completion time:%d\n",temp->completion_time);
        printf("Turnaround time:%d\n",temp->tat);
        printf("Waiting time:%d\n",temp->wt);
        i++;
        temp=temp->next;
        /* code */
    } 
    free(fnode);
}
