/*The natural logarithm can be approximated by the following series
(goto pdf;) 
If x is input through the keyboard, write a program to 
calculate the sum of first seven terms of this series.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,i;
	float sum=0;
	printf("Enter value of x: ");
	scanf("%d",&x);
	for(i=1;i<=7;i++)
	{
		  if(i==1)
		  	sum=sum+((x-1.0)/x);
		  else
		  	sum=sum+(1.0/2.0)*pow((x-1.0)/x,i);
	}
	printf("Sum of first seven terms: %.2f\n",sum);
}
