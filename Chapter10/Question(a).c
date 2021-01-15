/*A 5-digit positive integer is entered through the keyboard,
write a recursive and a non-recursive function to calculate sum 
of digits of the 5-digit number*/
#include<stdio.h>
int sum(int); //withour recursion
int rsum(int);	//with recursion
int main()
{
	int n,s,rs;
	printf("Enter Number: ");
	scanf("%d",&n);
	s=sum(n);
	rs=rsum(n);
	printf("Sum of its digits without recursion: %d\n",s);
	printf("Sum of its digits with recursion: %d\n",rs);
}
int sum(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10; 	//calculate remainder
		sum=sum+rem; 	//update Sum
		n=n/10;		//remove last digit
	}
	return(sum);
}
int rsum(int n)
{
	int rem,sum=0;
	if(n!=0)
	{
		rem=n%10;
		sum=rem+rsum(n/10);	//recursive call
	}
	return(sum);
}