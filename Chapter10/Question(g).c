/*If a positive integer is entered through the keyboard, 
write a recursive function to obtain the 
prime factors of the number.*/
#include<stdio.h>
void fact(int,int);
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("prime factors are: ");
	fact(n,2);
	printf("\n");
}
void fact(int n,int i)
{
	if(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			n=n/i;
		}
		else
			i++;
		fact(n,i);
	}
}