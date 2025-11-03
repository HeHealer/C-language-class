/*
Avishi Singhal: 590022192 (Function 1-4)
Vrinda Arora: 590020058 (Function 5-8)
Batch: 2
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct account
{
    int no;
    char name[100];
    float balance;
};
void inquiry();
void open_acc();
void close_acc();
void deposit();
void withdraw();
void display_balance();
void display_transactions();
void identify_defaulters();
int main(){
int choice;
do
{
    printf("\nWelcome to Bank Services!\n");
    printf("1.Inquiry.\n2. Open Account.\n3.Close Account.\n4.Deposit Money.\n5.Withdraw Money.\n6.Display Balance.\n7.Display Transactions.\n8.Identify Defaulters\n9.Exit\n");
    printf("Enter the choice you want to select: ");
    if(scanf("%d",&choice)!=1)
    {
        printf("Invalid\n");
        while (getchar()!='\n');
        choice=0;
        continue;
    }
    switch (choice)
    {
        case 1:
            inquiry();
            break;
        case 2:
            open_acc();
            break;
        case 3:
            close_acc();
            break;
        case 4:
            deposit();
            break;
        case 5:
            withdraw();
            break;
        case 6: 
            display_balance(); 
            break;
        case 7: 
            display_transactions(); 
            break;
        case 8: 
            identify_defaulters();
            break;
        case 9:
            printf("Exiting");
            break;
        default:
            printf("Invalid Choice");
            break;
    }
}while(choice!=9);
return 0; 
}
void inquiry()
{
    printf("\nSERVICES OUR BANK HAVE\n");
    printf("Open Account --> Open a new account for you.\n");
    printf("Close Account --> Close an existing account of yours.\n");
    printf("Deposit Money --> Help you deposit money.\n");
    printf("Withdraw Money --> Helps you withdraw money.\n");
    printf("Balance Display --> Display the amount of money you have in your account.\n");
    printf("Display Transactions --> Display all of your transactions.\n");
    printf("Identify Defaulters --> Identify Accounts with more or ness or negative balances.\n");
}
void open_acc()
{
    struct account acc;
    FILE *fp;
    fp=fopen("account.txt","a");
    if(!fp)
    {
        printf("ERROR");
        return;
    }
    printf("Enter Employee id: ");
    scanf("%d",&acc.no);
    printf("Enter name: ");
    getchar();
    fgets(acc.name,sizeof(acc.name),stdin);
    printf("Enter initial deposit: ");
    scanf("%f",&acc.balance);
    fprintf(fp,"%d %s %f\n",acc.no,acc.name,acc.balance);
    fclose(fp);
    printf("Created Successfully\n");
}
void close_acc()
{
    int no;
    struct account acc;
    FILE *fp;
    FILE *temp;
    fp=fopen("account.txt","r");
    temp=fopen("temp.txt","w");
    if(!fp||!temp)
    {
        printf("ERROR");
        return;
    }
    printf("Enter Employee id: ");
    scanf("%d",&no);
    int found=0;
    while(fscanf(fp,"%d %s %f",&acc.no,acc.name,&acc.balance)==3)
    {
        if(acc.no!=no)
        {
            fprintf(temp,"%d %s %f\n",acc.no,acc.name,acc.balance);
        }
        else
        {
            found=1;
        }
    }
    fclose(fp);
    fclose(temp);
    remove("account.txt");
    rename("temp.txt","account.txt");
    if(found)
    {
        printf("Closed Successfully");
    }
    else
    {
        printf("ERROR");
    }
}
void deposit()
{
    int no;
    float amount;
    struct account acc;
    FILE *fp;
    FILE *temp;
    fp=fopen("account.txt","r");
    temp=fopen("temp.txt","w");
    if(!fp||!temp)
    {
        printf("ERROR");
        return;
    }
    printf("Enter Employee id: ");
    scanf("%d",&no);
    printf("Enter Amount you want to deposit: ");
    scanf("%f",&amount);
    int found=0;
    while(fscanf(fp,"%d %s %f",&acc.no,acc.name,&acc.balance)==3)
    {
        if(acc.no==no)
        {
            acc.balance+=amount;
            found=1;
        }
        fprintf(temp,"%d %s %f\n",acc.no,acc.name,acc.balance);
    }
    fclose(fp);
    fclose(temp);
    remove("account.txt");
    rename("temp.txt","account.txt");
    if(found)
    {
        printf("Deposited Successfully");
    }
    else
    {
        printf("ERROR");
    }
}
void withdraw()
{
    int no, found=0;
    float amt;
    struct account acc;
    FILE *fp = fopen("account.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) 
    {
        printf("No account exist!\n");
        return;
    }
    printf("Enter Account Number\n");
    scanf("%d", &no);
    printf("Enter Amount to Withdraw\n");
    scanf("%f", &amt);
    while (fscanf(fp, "%d %s %f", &acc.no, acc.name, &acc.balance) == 3) 
    {
        if (acc.no == no) 
        {
            found=1;
            if (amt > acc.balance) 
            {
                printf("Insufficient balance!\n");
            }
             else
            {
                acc.balance-=amt;
                printf("Withdrawal successful! Remaining Balance: %f\n", acc.balance);
                FILE *log = fopen("transactions.txt", "a");
                fprintf(log, "Account %d withdrew %f Remaining balance=%f", acc.no, amt,acc.balance);
                fclose(log);
            }
        }
        fprintf(temp, "%d %s %.2f\n", acc.no, acc.name, acc.balance);
    }
    fclose(fp);
    fclose(temp);
    remove("account.txt");
    rename("temp.txt", "account.txt");
    if (!found)
        printf("Account not found.\n");
}
void display_balance() 
{
    int no,found=0;
    struct account acc;
    FILE *fp = fopen("account.txt", "r");
    if (fp==NULL) 
    {
        printf("No account exist!\n");
        return;
    }
    printf("Enter Account Number\n");
    scanf("%d", &no);
    while (fscanf(fp, "%d %s %f", &acc.no, acc.name, &acc.balance) == 3) 
    {
        if (acc.no==no)
         {
            found = 1;
            printf("Account No: %d\nName: %s\nBalance: %f\n", acc.no, acc.name, acc.balance);
        }
    }
    if (!found)
        printf("Account not found.\n");
    fclose(fp);
}
void display_transactions() 
{
    FILE *fp = fopen("transactions.txt", "r");
    if (fp==NULL) 
    {
        printf("No transactions\n");
        return;
    }
    char line[200];
    printf("\n-Transaction History\n");
    while (fgets(line, sizeof(line), fp)) 
    {
        printf("%s", line);
    }
    fclose(fp);
}
void identify_defaulters() 
{
    FILE *fp = fopen("account.txt", "r");
    struct account acc;
    int found = 0;
    if (fp == NULL)
    {
        printf("No account exist!\n");
        return;
    }
    printf("\nDefaulters (Balance < 1000)\n");
    while (fscanf(fp, "%d %s %f", &acc.no, acc.name, &acc.balance) == 3)
     {
        if (acc.balance < 1000) 
        {
            printf("Account No: %d\nName: %s\nBalance: %f\n", acc.no, acc.name, acc.balance);
            found = 1;
        }
    }
    if (!found)
        printf("No defaulters found.\n");
    fclose(fp);
}