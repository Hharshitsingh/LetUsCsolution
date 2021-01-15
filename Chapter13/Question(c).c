/*Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the user. 
Write a program to find if the number to be searched is present in the 
array and if it is present, display the number of times it appears in 
the array.*/
#include<stdio.h>
int main()
{
	int i,f,b,a[25]={};
	printf("Enter 25 numbers: ");
	for(i=0;i<25;i++)
		scanf("%d",&a[i]);
	printf("Enter number you want to find in array: ");
	scanf("%d",&f);
	for(i=0;i<25;i++)
	{
		if(f==a[i])
			b++;
	}
	printf("%d is present %d times in this array\n",f,b);
}
