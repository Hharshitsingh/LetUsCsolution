/*Write a program to print all prime numbers from 1 to 300,
(Hint Use nested loops, break and continue)*/
#include<stdio.h>
int main()
{
	int i,j;
	printf("Prime numbers 1 to 300\n");
	for(i=1;i<=300;i++)
	{
		for(j=2;j<=i;j++)
			if(i%j==0)
				break;
		if(j==i)
			printf("%d\n",i);
	}
}