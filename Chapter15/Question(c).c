/*Write a program that extracts part of the given string 
from the specified position. For example, if the sting is 
"Working with strings is fun", then if from position 4, 4 
characters are to be extracted then the program should return 
string as "king". If the number of characters to be extracted 
is 0 then the program should extract entire string from the 
specified position.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],*new[20];
	char *s,*t;
	int pos,n,i;
	printf("Enter the string: ");
	scanf("%[^\n]]s",str); 
	//function to take input multiple string
	printf("Enter position and number of characters to extracted: ");
	while(getchar()!='\n');  //clear input buffer
	scanf("%d%d",&pos,&n);
	s=str;
	t=new;
	if(n==0)
		n=strlen(str);
	s=s+pos-1;
	for(i=0;i<n;i++)
	{
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
	printf("The substring is :%s\n",new);
}