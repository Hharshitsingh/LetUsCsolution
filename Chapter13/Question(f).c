/*Write a program using pointers to find the smallest 
number in an array of 25 integers.*/
#include <stdio.h>
int main()
{
	int i,n,a[25]={};
	printf("Enter 25 numbers: ");
	for(i=0;i<25;i++)
		scanf("%d",&a[i]);
	n=*a;
	for(i=0;i<=24;i++)
	{
		if(*(a+i)<n)
			n=*(a+i);
	}
	printf("smallest number in array: %d\n",n);
}