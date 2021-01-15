/*Write a program to find if a square matrix is symmetric.*/
#include<stdio.h>
int main()
{
	int i,j,count=0,a[3][3]={};
	printf("Enter elements of 3x3 matrix: ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==a[j][i]) 	//check for symmetry
				count++;
		}
	}
	if(count==6)
		printf("The matrix is symmetric\n");
	else
		printf("The matrix is not symmetric\n");
}