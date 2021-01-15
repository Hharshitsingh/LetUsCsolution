/*Write a program that takes a set of names of individuals and 
abbreviates the first and middle name to their first letter.*/
#include <stdio.h>
int main()
{
	char str[40];
	int i=0,j=0;
	printf("Enter name, middle name and surname: ");
	scanf("%[^\n]",str);
	while(str[i]!='\0')
	{
		if(str[i]==32&&j<1)
		{
			printf("%c.",str[i+1]);
			j++;
		}
		else if(i==0)
			printf("%c.",str[0]);
		else if(str[i]==32)
		{
			while(str[i]!='\0')
			{
				printf("%c",str[i+1]);
				i++;
			}
		}
		i++;
	}
	printf("\n");
}