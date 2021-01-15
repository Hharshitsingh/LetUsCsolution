/*Write a program to receive value of an angle in degrees 
and check whether sum of squares of sine and cosine of this 
angle is equal to 1.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float angle,sum;
	printf("Enter angle in degrees: ");
	scanf("%f",&angle);
	angle=angle*3.14/180;
	sum=pow(sin(angle),2)+pow(cos(angle),2);
	if(sum==1)
		printf("sum of squares of sine and cosine is equal to 1\n");
	else
		printf("sum of squares of sine and cosine is not equal to 1\n");
}