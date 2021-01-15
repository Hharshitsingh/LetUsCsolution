/*Write a program to find the range of a set of numbers 
entered through the keyboard. Range is the difference between 
the smallest and biggest number in the list.*/
#include<stdio.h>
int main()
{
	int n,no,flag,small,big,range;
	flag=0;
	while(n>0)
	{
		printf("Enter Number: ");
		scanf("%d",&no);
		if(flag==0)
		{
			small=big=no;
			flag=1;
		}
		else
		{
			if(no>big)
				big=no;
			if(no<small)
				small=no;
		}
		n--;
		if(small<0)
			range=small+big;
		else
			range=big-small;
		if(range<0)
			range=range*-1;
		printf("The range of given set of Numbers: %d \n",range);
	}
}