/*Write a program to obtain transpose of a 4 x 4 matrix. The 
transpose of a matrix is obtained by exchanging the elements 
of each row with the elements of the corresponding column.*/
#include<stdio.h>
int main()
{
	int i,j,t,a[4][4]={};
	printf("Enter elements of 4x4 matrix: ");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	printf("matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);  //print matrix

		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];  		//transpose
			a[j][i]=t;

		}
	}
	printf("Transpose of matrix: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
}