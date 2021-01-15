/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not work 
for fractional part of an hour.*/
#include<stdio.h>
int main()
{
	float otpy;			
	int hour,i;
	for(i=1;i<=10;i++)
	{
		printf("Enter No. of hours worked: ");
		scanf("%d",&hour);
		if(hour>=40)
		{
			otpy=(hour-40)*12;
			printf("No. of hours worked: %d\nOvrtime pay: %.2f\n",hour,otpy);
		}
		else
			printf("No. of hours worked: %d i.e.less than 40hrs. \nHence no overtime pay\n",hour);
	}
}