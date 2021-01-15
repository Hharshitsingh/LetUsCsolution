/*A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not or palindrome.*/
#include<stdio.h>
int main()
{
	int n,r,rev=0,re;
	printf("Enter Number to find its reverse: ");\
	scanf("%d",&n);
	re=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(re==rev)
		printf("Entered Number is Palindrome\n");
	else
		printf("Entered Number is not Palindrome\n");
}