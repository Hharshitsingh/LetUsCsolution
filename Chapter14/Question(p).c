/*The X and Y coordinates of 10 different points are entered through 
the keyboard. Write a program to find the distance of last point from 
the first point (sum of distances between consecutive points).*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, x[10]={},y[10]={};
	float sum=0;
	printf("Enter the coordinates for the points: \n");
	for(i=0;i<9;i++)
	{
		printf("X[%d]=",i+1);
		scanf("%d",&x[i]);

		printf("Y[%d]=",i+1);
		scanf("%d",&y[i]);
	}
	for(i=0;i<=8;i++)
		sum=sum+sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
	printf("Distance of the last point from the first point=%.2f\n",sum);
}