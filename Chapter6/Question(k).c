/*Write a program to print 24 hours of day with suitable 
suffixes like AM, PM, Noon and Midnight.*/
#include<stdio.h>
int main()
{
	int hour;
	for(hour=0;hour<24;hour++)
	{
		if(hour==0)
			printf("12 Midnight\n");
		else if(hour<12)
			printf("%d AM\n",hour);
		else if(hour==12)
			printf("12 Noon\n");
		else if(hour>12)
			printf("%d PM\n",hour);
		else;
	}
}