/*Write a program to pick up the largest number from any 5 row by 5
column matrix.*/
#include<stdio.h>
int main()
{
	int i,j,big=0,m[5][5]={};
	printf("Enter elements of 5x5 matrix: ");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&m[i][j]);
	printf("matrix \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",m[i][j]);  //print elemets of matrix
			if(m[i][j]>big)
				big=m[i][j]; //check largest elements of matrix
		}
		printf("\n");
	}
	printf("Largest elements of matrix: %d\n",big);
}