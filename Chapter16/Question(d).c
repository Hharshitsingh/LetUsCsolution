/*Write a program to reverse the string stored in an array of 
pointers to strings:*/
#include<stdio.h>
#include <string.h>
void revstr(char*);
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	revstr(str);
	printf("reverse of string: %s\n",str);
}
void revstr(char* str)
{
	int l,i;
	char *bp,*ep,ch;
	l=strlen(str);	//get lenght of string
	bp=str;
	ep=str;
	for(i=0;i<l-1;i++)
		ep++;
	for(i=0;i<l/2;i++)
	{
		// Swap the char from start and end 
		ch=*ep;
		*ep=*bp;
		*bp=ch;
		// update pointers positions 
		bp++;
		ep--;
	}
}