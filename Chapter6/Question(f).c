/*When interest compounds q times per year at an annual 
rate of r% for n years, the principal p compounds to an 
amount a as per the following formula a = p (1+r/q)^nq
Write a program to read 10 sets of p, r, n & q and calculate 
the corresponding as.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float q,r,n,p,a;
	for(i=1;i<=10;i++)
	{
		printf("Enter principal amount, rate of interest,time,compound period: ");
		scanf("%f%f%f%f",&p,&r,&n,&q);
		a=p+pow((1+(r/q)),(n*q));
		printf("Total amount of %d set: %.2f\n",i,a);
	}
}