/*Write a program to print the multiplication table of 
the number entered by the user.*/
#include<stdio.h>
int main()
{
	int i,x;
	printf("Enter Number to print table: ");
	scanf("%d",&x);
	printf("table of %d \n",x);
	for(i=1;i<=10;i++)
		printf("%d*%d=%d\n",x,i,x*i);
}