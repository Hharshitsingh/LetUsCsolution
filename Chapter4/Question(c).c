/*Write a program to find the greatest of the three 
numbers entered through the keyboard. Use conditional operators.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Numbers a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)?printf("a is greatest \n"):(b>c)?printf("b is greatest\n"):printf("c is greatest\n");
}