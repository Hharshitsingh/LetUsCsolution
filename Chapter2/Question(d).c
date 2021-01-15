/*Write a program to receive Cartesian coordinates (x, y) 
of a point and convert them into polar coordinates (r, sye).
Hint: r = sqrt(x^x + y^y) and sye =tan^-1(y/x)*/
#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,r,sye;
	printf("Enter x and y coordinates: ");
	scanf("%f%f",&x,&y);
	r=sqrt((x*x)+(y*y));
	sye=atan2(y,x);
	sye=sye*180/3.14;			//convert to degree
	printf("r=%.3f\tsye=%.3f\n",r,sye);
}