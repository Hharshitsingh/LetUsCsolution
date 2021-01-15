/*Write a program which performs the following tasks:
-Initialize an integer array of 10 elements in main()
-Pass the entire array to a function modify()
-In modify() multiply each element of array by 3 
-Return the control to main() and print the new array elements in 
main()*/
#include<stdio.h>
void modify(int* );
int main()
{
	int i,a[10]={};
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	modify(&a[0]);
	printf("After multiply by 3: ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void modify(int*a)
{
	int i;
	for(i=0;i<10;i++)
	{
		*a=*a*3;
		a++;
	}
}