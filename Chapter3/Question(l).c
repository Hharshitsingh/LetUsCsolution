/*Given a point (x, y), write a program to find 
out if it lies on the X-axis, Y-axis or on the origin.*/
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x and y coordinates of a point; ");
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
		printf("Point lies on origin\n");
	else if(x==0&&y!=0)
		printf("Point lies on Y-axis\n");
	else if(x!=0&&y==0)
		printf("Point lies on X-axis\n");
	else
		printf("Point neither lies on any axis, nor origin\n");
}