/*Write a program to count the number of occurrences of 
any two vowels in succession in a line of text. For example, 
in the following sentence:
"Please read this application and give me gratuity"
such occurrences are ea, ea, ui. */
#include<stdio.h>
int main()
{
	char str[100];
	int count=0;
	char *s=str;
	printf("Enter the string: \n");
	scanf("%[^\n]",str);
	while(*s)
	{
		if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
		{
			s++;
			if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
				count++;
		}
		s++;
	}
	printf("number of occurrences of two vowels: %d\n",count);
}