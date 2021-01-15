/*If a five-digit number is input through the keyboard,
 write a program to reverse the number.*/
#include<stdio.h>
int main()
{
	int n,r,rev=0;
	printf("Enter Number to find its reverse: ");\
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("Reverse of Number: %d\n",rev);
}