/* Write a program to find the absolute value of a 
number entered through the keyboard.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a<0)
		a=a*-1;
	printf("absolute value of number: %d\n",a);
}