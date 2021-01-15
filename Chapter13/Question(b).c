/*Write a program to copy the contents of one array 
into another in the reverse order.*/
#include<stdio.h>
int main()
{
	int i,t,a[10]={},b[10]={};
	printf("Enter 10 elements of array: ");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=9;i++)	
		b[i]=a[i];		//copy array
	printf("Elemets in reverse order: ");
	for(i=9;i>=0;i--)
		printf("%d\t",b[i]);
	printf("\n");
}