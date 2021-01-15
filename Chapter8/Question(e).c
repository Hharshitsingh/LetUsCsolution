/*A positive integer is entered through the keyboard. 
Write a function to obtain the prime factors of this number.*/
#include<stdio.h>
void prime(int);
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	prime(num);
}
void prime(int n)  	//nature of function is take something return nothing
{
	int i=2;
	printf("Prime factors of %d: ",n);
	while(n!=1)
	{
		if(n%i==0)
			printf("%d\t",i);
		else
		{
			i++;
			continue;
		}
		n=n/i;
	}
}