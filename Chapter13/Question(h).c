/* Implement the Insertion Sort algorithm shown in 
Figure 13.3 on a set of 25 numbers.
goto pdf; */             
#include<stdio.h>
int main()
{
	int i,j,t,a[25]={};
	printf("Enter 25 elements of an array: ");
	for(i=0;i<25;i++)
		scanf("%d",&a[i]);
	for(i=1;i<25;i++)
	{
		t=a[i];
		for(j=i-1;j>=0&&a[j]>t;j--)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	for(i=0;i<25;i++)
		printf("%d\t",a[i]);
	printf("\n");
}