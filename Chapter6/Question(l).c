/*Write a program to produce the following output:
goto pdf; */
#include<stdio.h>
int main()
{
	int i,j,x=1,k;
	for(i=1;i<=4;i++)
	{
		k=1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i&&k)
			{
				printf("%d",x);
				x++;
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}