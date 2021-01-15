/*Write a program to find the factorial value of 
any number entered through the keyboard.*/
#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter Number to find Factorial: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		f=f*i;
	printf("Factorial of %d: %d\n",n,f);
}