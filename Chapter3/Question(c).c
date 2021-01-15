/*Any year is input through the keyboard.
Write a program to determine whether 
the year is a leap year or not.*/
#include<stdio.h>
int main()
{
	int y;
	printf("Enter year: ");
	scanf("%d",&y);
	if(y%4==0)
		printf("%d is leap year\n",y);
	else
		printf("%d is ordinary year\n",y);
}