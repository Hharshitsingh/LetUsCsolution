/*Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how many 
are negative, how many are even and how many odd.*/
#include<stdio.h>
int main()
{
	int i,p,n,a[25];
	printf("Enter 25 elements of array: ");
	for(i=0;i<25;i++)
		scanf("%d",&a[i]);
	for(i=0;i<25;i++)
	{
		if(a[i]>0)		
			p++;
		if(a[i]<0)
			n++;
	}
	printf("Number of positive elements: %d\nNumber of negative elements: %d\n",p,n);
}