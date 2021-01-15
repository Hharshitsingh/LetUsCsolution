/*Any integer is input through the keyboard. 
Write a program to find out whether 
it is an odd number or even number.*/
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number: ");
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even\n",x);
	else
		printf("%d is odd\n",x);
}