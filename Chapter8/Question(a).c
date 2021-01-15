/*Write a function to calculate the factorial value of any 
integer entered through the keyboard.*/
#include<stdio.h>
int fact(int);		//function prototype
int main()
{
	int a,b; 
	printf("Enter Number to find factorial: ");
	scanf("%d",&a);
	b=fact(a);			//fact function is invoked
	printf("Factorial of %d: %d\n",a,b);
}
int fact(int x)	 //nature of function is take something return something 
{
	int f=1,i;	
	for(i=x;i>=1;i--)		//function define
		f=f*i;
	return(f);
}