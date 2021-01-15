/*If an array arr contains n elements, then write a program to
check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.*/
#include<stdio.h>
int main()
{
	int n,i,j,arr[100]={};
	printf("how many elements you want to enter: ");
	scanf("%d",&n);
	printf("Enter %d elements of array: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Result: ");
	for(i=0;i<n;i++)
	{
		if(arr[i]=arr[n-(i+1)])
			printf("%d\t",arr[i]);
	}
	printf("\n");
}