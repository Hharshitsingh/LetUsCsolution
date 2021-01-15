/*Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.*/
#include<stdio.h>
int main()
{
	int c,d,e;
	printf("Enter Two Numbers C and D: ");
	scanf("%d%d",&c,&d);
	e=c;
	c=d;
	d=e;
	printf("C=%d\t,D=%d\n",c,d);
}