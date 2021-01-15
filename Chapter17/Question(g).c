/*Write a function that compares two given dates. To store a date use a 
structure that contains three members namely day, month and year. If the 
dates are equal the function should return 0, otherwise it should return 1.*/
#include<stdio.h>
int chkdate();
struct date
	{
	int day;
	int month;
	int year;
	};
struct date d1,d2;
void main()
{
	int r;
	printf("Enter first date(dd/mm/yyyy):");
	scanf("%d/%d/%d",&d1.day,&d1.month,&d1.year);
	printf("Enter second date(dd/mm/yyyy):");
	while(getchar()!='\n');
	scanf("%d/%d/%d",&d2.day,&d2.month,&d2.year);
	r=chkdate();
	if(r==0)
	printf("\nDates are equal\n");
	else
	printf("\nDates are not equal\n");
}
int chkdate()
{
	if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
		return 0;
	else
		return 1;
}