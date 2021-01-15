/*Write a program to multiply any two 3 x 3 matrices.*/
#include<stdio.h>
int main()
{
	int i,j,k,sum,a[3][3]={},b[3][3]={},c[3][3]={};
	printf("Enter elements of first (3x3) matrix: ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);	//taking input for first matrix

	printf("Enter elements of second (3x3) matrix: ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]); 	//taking input for second matrix

	printf("Elements of first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);  //display elemets of first matrix
		printf("\n");
	}
	printf("\n");

	printf("Elements of second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",b[i][j]);		//display elemets of second matrix
		printf("\n");
	}
	printf("\n");
	
	printf("Multiplication of matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
				sum=sum+a[i][k]*b[k][j];  //multiply matrix
			c[i][j]=sum; 
			printf("%d\t",c[i][j]); 	
		}
		printf("\n");
	}
}