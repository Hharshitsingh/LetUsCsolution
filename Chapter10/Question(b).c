/*A positive integer is entered through the keyboard, 
write a program to obtain the prime factors of the number. 
Modify the function suitably to obtain the prime 
factors recursively.*/
#include<stdio.h>
void prime(int);
int main()
{
	int n;
	printf("Enter Number to find prime factors: ");
	scanf("%d",&n);
	printf("Prime factors are: ");
	prime(n);
	printf("\n");
}
void prime(int n)
{
	static int i=2;
	if(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			n=n/i;
		}
		else
			i++;
		prime(n); //recursive call
	}
	return;
}