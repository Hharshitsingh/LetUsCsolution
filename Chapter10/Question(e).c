/*Write a recursive function to obtain the sum of first 25 
natural numbers.*/
#include<stdio.h>
int sum(int);
int main()
{
	int s;
	s=sum(0);
	printf("Sum of first 25 natural numbers: %d\n",s);
}
int sum(int n)
{
	int su=0;
	if(n==25)
		return(su);
	su=n+sum(++n);
	return(su);
}