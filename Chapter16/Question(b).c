/*Write a program that uses an array of pointers to strings str[ ] 
as given below. Receive a string str1 and check if str1 is embedded 
in any of the strings in str[].
char *str[] = {

					"We will teach you how to...",
					"Move a mountain",
					"Level a building",
					"Erase the past",
					"Make a million",
					'...all through C!"
				};*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[20],str2[20];
	char *new,*t,*p;
	int i,n;
	char *str[]={  "We will teach you how to...",
					"Move a mountain",
					"Level a building",
					"Erase the past",
					"Make a million",
					"...all through C!" };
	printf("Enter the string to be replaced\n");
	scanf("%s",str1);
	printf("Enter new string: ");
	scanf("%s",str2);
	//check the lenght of the new string
	if(strlen(str2)>strlen(str1))
	{
		printf("Enter a string with %ld characters only\n",strlen(str1));
		exit(0);
	}
	for(i=0;i<6;i++)
	{
		//Find the entered string in the given array
		p=strstr(str[i],str1);

		if(p)
		{
			//copy remaining string
			new=p+strlen(str1);
			strcpy(t,new);
			//Replace the old string
			strcpy(p,str2);
			//Finally append the remaining part
			strcat(p,t);
			break;
		}
	}
	printf("The new string is: \n");
	for(i=0;i<6;i++)
		printf("%s\n",str[i]);
}