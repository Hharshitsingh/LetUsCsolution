/* Write a recursive function to obtain the first 25 numbers of a 
Fibonacci sequence. In a Fibonacci sequence the sum of two successive 
terms gives the third term. Following are the first few terms of the 
Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55 89...*/
#include<stdio.h>
void fib(int, int);
int main()
{
	int i,t,old=0,current=1,new;
	printf("%d\t%d\t",old,current);
	fib(old,current);
	printf("\n");
}
void fib(int old, int current )
{
	static int terms=2;
	int new;
	if(terms<25)
	{
		new=old+current;
		printf("%d\t",new);
		terms=terms+1;
		fib(current,new);
	}
	else
		return;
}