/*Whether the character entered through the 
keyboard is a lower case alphabet or not.
Whether a character entered through the
keyboard is a special symbol or not.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character from keyboard: ");
	scanf("%c",&ch);
	(ch>=65&&ch<=90)?printf("The character is an uppercase alphabet\n"):(ch>=67&&ch<=122)?printf("The character is an lowercase alphabet\n"):((ch>=0&&ch<48)||(ch>57&&ch<65)||ch>90&&ch<97||ch>122&&ch<128)?printf("The character is special symbol\n"):printf("invalid alphabet\n");
}