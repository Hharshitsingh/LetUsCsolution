/*Create a structure that can contain data of customers in a bank. 
The data to be stored is Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(1) Write a function to print the Account number and name of each 
customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form contains 
the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a function that prints a message, "The balance is insufficient for 
the specified withdrawal", if on withdrawal the balance falls below Rs. 100.*/
#include<stdio.h>
//structure for customer
struct customer
{
	int acc_no;
	char name[40];
	float bal_i_acc;
};
struct customer cust[200];
//function prototypes
void set_cust_data(int);
void display(int);
void low_bal(int);
void with_dep(int,int, float);
void deposit(int, int, float);
void withdrawal(int, int, float);
int main()
{
	int j,ano,choice;
	float amount;
	printf("How many customer records you want to enter: ");
	scanf("%d",&j);
	//initialised customer record
	set_cust_data(j);
	//display customer record();
	display(j);
	//print name and account number of the customer whose balance is less than 100
	low_bal(j);
	//withdraw or deposite the amount in the account 
	printf("\nEnter the account number and the amount to be deposit/withdrawn: ");
	scanf("%d%f",&ano,&amount);
	with_dep(j,ano,amount);
	//display all the recors of customers
	display(j);
}
void set_cust_data(int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("\nEnter the account number of the customer: ");
		scanf("%d",&cust[i].acc_no);

		printf("Enter the name of the customer: ");
		while(getchar()!='\n');
		scanf("%[^\n]",cust[i].name);

		printf("Enter the balance amount in the customer account: ");
		scanf("%f",&cust[i].bal_i_acc);
	}
}
void display(int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("\nCustomer number: %d\n",i+1);
		printf("Account number of customer: %d\n",cust[i].acc_no);
		printf("Name of customer: %s\n",cust[i].name);
		printf("Balance amount of customer: %.3f\n",cust[i].bal_i_acc);
	}
}
void low_bal(int j)
{
	int i,k=0;
	printf("\nName and account number of customer whose balance is less than 100\n");
	for(i=0;i<j;i++)
	{
		if(cust[i].bal_i_acc<100)
		{
			printf("customer number: %d\n",i+1);
			printf("Account number of customer: %d\n",cust[i].acc_no);
			printf("Name of customer: %s\n",cust[i].name);
			k=1;
		}
	}
	if(k==0)
		printf("\nEvery customer has more than 100 minimum Balance\n");

}
void with_dep(int j, int ano, float amount)
{
	int choice;
	printf("Enter 1 for deposit\nEnter 2 for withdrawal");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			deposit(j,ano,amount);
			break;
		case 2:
			withdrawal(j,ano,amount);
			break;
		default :
			printf("\nYou Entered wrong choice\n"); 
	}

}
void deposit(int j, int ano, float amount)
{
	int i,k=0;
	for(i=0;i<j;i++)
	{
		if(cust[i].acc_no==ano)
		{
			cust[i].bal_i_acc+=amount;
			k=1;
		}
	}
	if(j==0)
		printf("\nWrong account number\n");
}
void withdrawal(int j, int ano, float amount)
{
	int i,k=0;
	for(i=0;i<j;i++)
	{
		if(cust[i].acc_no==ano)
		{
			if(cust[i].bal_i_acc<100)
			{
				printf("\nThe Balance is insufficient for the specified withdrawal\n");
			}
			else if(cust[i].bal_i_acc-100>amount)
					cust[i].bal_i_acc-=amount;
			else
				printf("\nWithdrawal amount should be less tham or equal to %.2f",cust[i].bal_i_acc-100);
		}
	}
	if(j==0)
		printf("\nWrong Account Number\n");
}