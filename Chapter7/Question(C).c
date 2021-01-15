/*Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be taken 
and once this action is finished, the menu should reappear.
Unless the user selects the 'Exit option the program should
continue to run.
Hint: Make use of an infinite while and a switch statement*/
#include<stdio.h>
#include <stdlib.h>		//exit function in present in this header file
int menu();			//use function code become simple ans easy to read
void fact();			
void prime();
void odev();
int main()
{
	int m;
	while(1)
	{
		switch(menu())
		{
			case 1: 
				fact();
				break;
			case 2:
				prime();
				break;
			case 3:
				odev();
				break;
			case 4:
				exit(0);
			default :
				printf("Invalid choice\n");
		}
	}
}
int menu()
{
	int ch;
	printf("\n1.Factorial of a number");
	printf("\n2.Prime or not");
	printf("\n3.Odd or even");
	printf("\n4.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	return(ch);
}
void fact()
{
	int n,i,f=1;
	printf("Enter Number to find Factorial: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		f=f*i;
	printf("Factorial of %d: %d\n",n,f);
}
void prime()
{
	int i,x;
	printf("Enter Number to check prime or not: ");
	scanf("%d",&x);
		for(i=2;i<=x;i++)
			if(x%i==0)
				break;
		if(i==x)
			printf("%d is prime number\n",x);
		else
			printf("%d is not prime number\n",x);
}
void odev()
{
	int x;
	printf("Enter a Number: ");
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even\n",x);
	else
		printf("%d is odd\n",x);
}