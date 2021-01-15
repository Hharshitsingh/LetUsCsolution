/*Write a program to delete all vowels from a sentence. 
Assume that the sentence is not more than 80 characters long.*/
#include<stdio.h>
int main()
{
	char str[80],str1[80];
	char *s,*p;
	printf("Enter a sentence not more than 80 characters long: \n");
	scanf("%[^\n]",str);
	s=str; //base address of the string 
	p=str1; //base address of new string
	while(*s)
	{
		if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
			s++;
		else
			if(*s=='A'||*s=='E'||*s=='I'||*s=='O'||*s=='U')
				s++;
		else
			*p++=*s++;
	}
	*p='\0';
	printf("sentence after removing all vowels is: \n");
	puts(str1);
}