/*If value of an angle is input through the keyboard,
write a program to print all its Trigonometric ratios.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float angle,s,c,t;
	printf("Enter angle: ");
	scanf("%f",&angle);
	angle=angle*3.14/180;		//covert angle to radians
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	printf("sin=%.2f\tcos=%.2f\ttan=%.2f\n",s,c,t);
}