/*Write a function power (a, b), to calculate the value 
of a raised to b.*/
#include<stdio.h>
int power(int x, int y);
int main()
{
	int a,b,c;
	printf("Enter two Numbers (2nd is raised power of 1st): ");
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("%d power of %d: %d\n",a,b,c);
}
int power(int x,int y)
{
	int p=1,i;
	for(i=1;i<=y;i++)
		p=p*x;
	return(p);
}