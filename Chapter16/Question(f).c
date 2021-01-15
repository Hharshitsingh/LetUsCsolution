/*Write a program that will read a line and delete 
from it all occurrences of the word 'the'.*/
#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	char *s,*q,*p;
	int i;
	printf("Enter a sentence not more than 100 char long:\n  ");
	scanf("%[^\n]",str1);
	s=str1;	//base address of string
	p=str2;	//base address of new string
	while(*s)
	{
		q=s;
		if(*s=='t'||*s=='T')
		{
			s++;
			if(*s=='h'||*s=='H')
			{
				s++;
				if(*s=='e'||*s=='E')
				;
				else
				{
					for(i==0;i<=2;i++)
						*p++=*q++;
				}
			}
			else
			{
				*p++=*q++;
				 s--;
			}	
		}
		else
			*p++=*s;
		s++;
	}		
	*p='\0';
	printf("Sentence after deleting all occurrences of 'the':\n  ");
	puts(str2);

}