#include<stdio.h>
int roman(int, int, char);
int main()
{
	int yr;
	printf("Enter year: ");
	scanf("%d",&yr);
	yr=roman(yr,1000,'M'); 	//series of function calls
	yr=roman(yr,500,'D');
	yr=roman(yr,100,'C');
	yr=roman(yr,50,'L');
	yr=roman(yr,10,'X');
	yr=roman(yr,5,'V');
	yr=roman(yr,1,'I');
	printf("\n");
}
int roman(int y,int x,char ch)
{
	int i,j;
	if(y==9)
	{
		printf("IX");
		return(y%9);
	}
	if(y==4)
	{
		printf("IV");
		return(y%4);
	}
	j=y/x;
	for(i=1;i<=j;i++)
		printf("%c",ch);
	return(y%x);
}