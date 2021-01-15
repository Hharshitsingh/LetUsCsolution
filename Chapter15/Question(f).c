/*To uniquely identify a book a 10-digit ISBN (International Standard Book Number) 
is used. The rightmost digit is a checksum digit. This digit is determined from the 
other 9 digits using the condition that d1+2d2+3d3+ ..+10d10 must be a multiple of 11 
(where d denotes the i digit from the right). The checksum digit d, can be any value 
from 0 to 10: the ISBN convention is to use the value X to denote 10. Write a program 
that receives a 10-digit integer, computes the checksum, and reports whether the
ISBN number is correct or not.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[11];
	int i,j=2,sum=0;
	printf("Enter 10 digit ISBN number: ");
	scanf("%s",str);
	for(i=8;i>=0;i--)
	{
		sum=sum+(str[i]-'0')*j;
		j++;
	}
	for(i=0;i<=9;i++)
	{
		if((sum+i)%11==0)
			break;
	}
	if(i=str[9]-'0')
		printf("ISBN Number is verified and found to be correct\n");
	else
		printf("checksum error in ISBN Number\n");
}