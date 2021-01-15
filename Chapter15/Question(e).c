/*Write a program that generates and prints the Fibonacci words of 
order 0 through 5. If f(0)="a", f(1)="b", f(2)="ba", f(3)="bab",
f(4)="babba",etc*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char lastontterm[50]="A";
	char lastterm[50]="B";
	int i;
	for(i=1;i<=5;i++)
	{
		strcpy(str,lastterm);
		strcat(str,lastontterm);
		printf("%s\n",str);
		strcpy(lastontterm,lastterm);
		strcpy(lastterm,str);
	}
}