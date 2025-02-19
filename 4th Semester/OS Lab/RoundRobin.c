#include <stdio.h>
#include <stdlib.h>
struct process {
    int a_time;
    int b_time;
    int r_time;
    int pno;
    int completion_time;
    int tat;
    int wt;
    struct process *next;
};
int main()
{
    struct process *fnode;
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    fnode = (struct process *)malloc(sizeof(struct process));
    printf("For process 1:\n");
    printf("Enter arrival time: ");
    scanf("%d", &fnode->a_time);
    printf("Enter burst time: ");
    scanf("%d", &fnode->b_time);
    fnode->r_time = fnode->b_time;
    fnode->pno = 1;
    fnode->next = NULL;
    struct process *ptr = fnode;
    for (int i = 2; i <= n; i++) 
    {
        struct process *snode = (struct process *)malloc(sizeof(struct process));
        printf("For process %d:\n", i);
        printf("Enter arrival time: ");
        scanf("%d", &snode->a_time);
        printf("Enter burst time: ");
        scanf("%d", &snode->b_time);
        snode->r_time = snode->b_time;
        snode->pno = i;
        snode->next = NULL;
        ptr->next = snode;
        ptr = ptr->next;
    }
    int tq;
    printf("Enter time quantum: ");
    scanf("%d", &tq);
    struct process *temp;
    int time = 0, completed = 0, entr = 0;
    while (completed != n) 
    {
        temp = fnode;
        entr = 0;
        while (temp != NULL) {
            if (temp->a_time <= time && temp->r_time > 0) 
            {
                if (temp->r_time > tq) 
                {
                    time += tq;
                    temp->r_time -= tq;
                } 
                else 
                {
                    time += temp->r_time;
                    temp->r_time = 0;
                    temp->completion_time = time;
                    temp->tat = temp->completion_time - temp->a_time;
                    temp->wt = temp->tat - temp->b_time;
                    completed++;
                }
                entr = 1;
            }
            temp = temp->next;
        }
        if (entr == 0) {
            time++;
        }
    }
    temp = fnode;
    while (temp != NULL) 
    {
        printf("For process no. %d:\n", temp->pno);
        printf("Burst Time: %d\t", temp->b_time);
        printf("Arrival Time: %d\t", temp->a_time);
        printf("Completion time: %d\t", temp->completion_time);
        printf("Turnaround time: %d\t", temp->tat);
        printf("Waiting time: %d\t\n", temp->wt);
        printf("****************************************************************************\n");
        temp = temp->next;
    }
    temp = fnode;
    while (temp != NULL) 
    {
        struct process *next = temp->next;
        free(temp);
        temp = next;
    }
    return 0;
}