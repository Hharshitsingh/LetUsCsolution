/*Write a program to add two 6 x 6 matrices.*/
#include<stdio.h>
int main()
{
	int i,j,a[6][6]={},b[6][6]={},c[6][6]={};
	printf("Enter elements of first (6x6) matrix: ");
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&a[i][j]);	//taking input for first matrix

	printf("Enter elements of second (6x6) matrix: ");
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&b[i][j]); 	//taking input for second matrix

	printf("Elements of first matrix: \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf("%d\t",a[i][j]);  //display elemets of first matrix
		printf("\n");
	}
	printf("\n");

	printf("Elements of second matrix: \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf("%d\t",b[i][j]);		//display elemets of second matrix
		printf("\n");
	}
	printf("\n");
	
	printf("sum of matrix: \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			c[i][j]=a[i][j]+b[i][j];  	//adding two matrix;
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}