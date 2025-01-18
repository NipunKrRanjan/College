#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int i=0;
int trans=1;
struct customer
{
    char name[100];
    int account;
    char password[20];
    char mobile[11];
    double balance;
    int age;
    char gender;
    char martial;
    /* data */
};
struct transaction
{
    double amount[100];
    int transid[100];
    int transactions=0;
};
void createuser(struct customer user[],struct transaction tran[] );
int checkaccount(struct customer user[]);
void changepassword(struct customer user[],int ac);
void aftersignin(struct customer user[],int a,struct transaction tran[]);
bool checkpassword(struct customer user[],int a);
void accountoperation(struct customer user[],struct transaction tran[],int a);
void transactionhistory(double amount,char op,struct transaction tran[],int a);
void transactiondisplay(struct transaction tran[],int a);
void accountdisplay(struct customer user[],int a);
void bankbalance(struct customer user[],int a);
void deletion(struct customer user[],int a);
int main()
{
    
    struct customer user[100];
    struct transaction tran[100];
    printf("***************************************************************************************************\n\n");
    printf("                                WELCOME TO PERSONAL BANKING SYSTEM                                  \n");
    printf("                               YOUR ONE STOP SOLUTION TO ALL BANKING                                 \n\n");
    printf("***************************************************************************************************\n\n");
    while (1)
    {
        int a;
        int ch;
        printf("Press\n1:To Create a New User  \n2:To Sign In into existing Account  \n3:Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            createuser(user,tran);
            /* code */
            break;
        case 2:
            a=checkaccount(user);
            if(a!=-1)
            {   
                printf("Welcome, ");
                if (user[a].gender=='M'||user[a].gender=='m')
                {
                    printf("Mr.%s\n",user[a].name);
                }
                else
                {
                        if(user[a].gender=='F'||user[a].gender=='f')
                        {
                            if(user[a].martial=='Y'||user[a].martial=='y')
                            {
                                printf("Mrs.%s\n",user[a].name);
                            }
                            else
                            {
                                printf("Ms.%s\n",user[a].name);
                            }
                        }
                }
                aftersignin(user,a,tran);
            }
            else
            {
                printf("Account Not Found!.\nPlease create an account\n");
            }
        break;
        case 3:
            printf("Thank you for using our service");
            break;
        }
        if(ch==3)
         break;
        /* code */
    }
    return 0;
}
void createuser(struct customer user[],struct transaction tran[])
{
    char check[20];
    char t;
    scanf("%c",&t);
    printf("Enter your name:\n");
    scanf("%[^\n]s",user[i].name);
    printf("Create a password for your account:\n* The password should be of maximum of 20 charcahter and minimum 8 charachters*\n");
    scanf("%s",user[i].password);
    while(1)
    {
        if(strlen(user[i].password)>=8&&strlen(user[i].password)<=20)
         break;
        else
        {
            printf("Password Inavalid!. Create a password for your account:\n* The password should be of maximum of 20 charcahter and minimum 8 charachters*\n");
            scanf("%s",user[i].password);
        }
    }
    
    while(1)
    {
        printf("Please re-enter your password for confirmation\n");
        scanf("%s",check);
        if(strcmp(check,user[i].password)==0)
        {
            printf("Password verified\n");
            break;
        }
        else
        {
            printf("Wrong password entered.\n");
        }
        /* code */
    }
    printf("Enter your age:\n");
    scanf("%d",&user[i].age);
    scanf("%c",&t);
    printf("Enter your gender:\n(M/F/O)\n");
    scanf("%c",&user[i].gender);
    scanf("%c",&t);
    printf("Are you married?\n(Y/N)\n");
    scanf("%c",&user[i].martial);
    scanf("%c",&t);
    printf("Enter your mobile number:\n");
    scanf("%s",&user[i].mobile);
    user[i].balance=0.0;
    user[i].account=rand()+i;
    tran[i].transactions=0;
    printf("\nAccount created successfully!!\n");
    accountdisplay(user,i);
    i++;
}
int checkaccount(struct customer user[])
{
    int acc;
    printf("Please enter your account number:\n");
    scanf("%d",&acc);
    for(int j=0;j<=i;j++)
    {
        if(user[j].account==acc)
            return j;
    }
    return -1;
}
void changepassword(struct customer user[],int a)
{
    char newpass[20];
    if(checkpassword(user,a))
    {
        getchar();
        printf("Enter your new password:\n");
        scanf("%s",newpass);
        int j=0;
        while(j<=3)
        {
            char check[20];
            getchar();
            printf("Re-Enter your password to confirm:\n");
            scanf("%s",check);
            if(strcmp(check,newpass)==0)
            {
                printf("Password Changed Successfully!\n");
                strcpy(user[a].password, newpass);
                break;
            }
            else
             printf("Wrong password:\n");
            j++;
        }
    }
}
void aftersignin(struct customer user[], int a,struct transaction tran[])
{
    int ch;
    while(1)
    {
        printf("Press\n1:To Withdraw/Credit Money\n2:To Change Password\n3:To view transaction histroy\n4:To Display Account Details\n5:To check Bank Balance\n6:To Delete Account\n7:To LogOut\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            accountoperation(user,tran,a);
            break;
        case 2:
            changepassword(user,a);
            break;
        case 3:
            transactiondisplay(tran,a);
            break;
        case 4:
            accountdisplay(user,a);
            break;
        case 5:
            bankbalance(user,a);
            break;
        case 6:
            deletion(user,a);
            break;
        case 7:
            break;
        }
        if(ch==7||ch==6)
        {
            printf("*****       THANK YOU FOR USING THE SERVICES!       *****");
            break;
        }
    }
}
bool checkpassword(struct customer user[], int a)
{
    int j=0;
    while(j<=3)
    {
        char pass[20];
        getchar();
        printf("Enter your password:\n");
        scanf("%s",&pass);
        if(strcmp(pass,user[a].password)==0)
            return true;
        else
            printf("Wrong password!!\n");
        j++;
    }
    return false;
        
}
void bankbalance(struct customer user[],int a)
{
    if(checkpassword(user,a))
    {
        printf("Your Current Bank Balance is:%lf\n",user[a].balance);
    }
}
void accountoperation(struct customer user[], struct transaction tran[], int a)
{
    char ch;
    getchar();
    printf("Enter operation to be performed:\nw: to withdraw money\nc:to credit money into your account\n");
    scanf("%c",&ch);
    double amount;
    switch (ch)
    {
    case 'w':
        printf("Enter amount to be withdrawn:\n");
        scanf("%lf",&amount);
        if(checkpassword(user,a))
        {
            if(amount>user[a].balance)
            {
                printf("Insufficient Balance.:(\n");
            }
            else
            {
                user[a].balance=user[a].balance-amount;
                printf("Withdrawal successful!!\n");
                printf("Your current balance is:%lf\n",user[a].balance);
                transactionhistory(amount,'w',tran,a);
            }
        }
        break;
    case 'c':
        printf("Enter amount to be credited:\n");
        scanf("%lf",&amount);
        if(checkpassword(user,a))
        {
            user[a].balance=user[a].balance+amount;
            printf("Credit Successful!!\n");
            printf("Your Present Bank Balance:%lf\n",user[a].balance);
            transactionhistory(amount,'c',tran,a);
        }
        break;
    default:
        printf("Invalid Input");
        break;
    }
    
}
void transactionhistory(double amount, char op,struct transaction tran[],int a)
{
    if(op=='w')
    {
        amount=amount*-1.0;
    }
    
    tran[a].amount[tran[a].transactions]=amount;
    tran[a].transid[tran[a].transactions]=trans;
    tran[a].transactions++;
    trans++;
}
void transactiondisplay(struct transaction tran[], int a)
{
    printf("Your transaction is as follows:\n");
    if(tran[a].transactions==0)
    {
        printf("No transactions yet!!\n");
    }
    else
    {
        for(int j=0;j<tran[a].transactions;j++)
        {
            printf("Transaction ID:%d\tTransaction Amount:%lf\n",tran[j].transid,tran[j].amount);
        }
    }
}
void accountdisplay(struct customer user[], int a)
{
    printf("Your Account Details are as follows:\n");
    printf("Name:%s\n",user[a].name);
    printf("Mobile Number:%s\n",user[a].mobile);
    if(user[a].gender=='M'||user[a].gender=='m')
    printf("Gender:Male\n");
    else if(user[a].gender=='F'||user[a].gender=='f')
    printf("Gender:Female\n");
    else
    printf("Other\n");
    if(user[a].martial=='Y'||user[a].martial=='y')
    printf("Martial Status:Married\n");
    else
    printf("Martial Status:Not Married\n");
    printf("Account Number:%d\n",user[a].account);
    printf("Age;%d\n",user[a].age);
    printf("Available Bank Balance:%lf\n",user[a].balance);
}
void deletion(struct customer user[], int a)
{
    char ch,t;
    scanf("%c",&t);
    printf("Are you Sure to delete your account?(y/n)\n");
    scanf("%c",&ch);
    if(ch=='y')
    {
        if(checkpassword(user,a))
        {
            for(int j=a;j<i;j++)
            {
                user[j]=user[j+1];
            }
            i--;
            printf("Account Deleted Successfully!!\n");
        }
    }
}
