/*Write a program to add first seven terms of 
the following series
(1/1!)+(2/2!)+(3/3!)+.... */
#include<stdio.h>
int main()
{
	int i,j;
	float fact,sum=0;
	for(i=1;i<=7;i++)
	{
		fact=1;
		for(j=i;j>=1;j--)	//calc factorial 
			fact=fact*j;
		sum=sum+i/fact;
	}
	printf("Sum of Seven series: %.2f\n",sum);
}