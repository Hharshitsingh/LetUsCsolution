/*Any year is entered through the keyboard. Write a function 
to determine whether the year is a leap year or not.*/
#include<stdio.h>
int leap(int);
int main()
{
	int y,a;
	printf("Enter a year: ");
	scanf("%d",&y);
	a=leap(y);
	if(a==1)
		printf("%d is leap year\n",y);
	else
		printf("%d is not leap year\n",y);
}
int leap(int x)
{
	if(x%4==0)
		return(1);
	else
		return(0);
}