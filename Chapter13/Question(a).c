/*Write a program that interchanges the odd and 
even elements of an array.*/
#include<stdio.h>
int main()
{
	int i,t,a[10]={};		//array of ten elements
	printf("Enter 10 number: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i+=2) //increment in i with 2
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("After interchanging array elements: ");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n");
}