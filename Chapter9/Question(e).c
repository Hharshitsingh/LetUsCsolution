/*If the lengths of the sides of a triangle are denoted 
by a, b, and c, then area of triangle is given by
area = sqrt(s*(s-a)*(s-b)*(s-c))
where, s=(a+ b + c)/2. Write a function to calculate 
the area of the triangle. */
#include <stdio.h>
#include <math.h>
float aroft(float, float,float);
int main()
{
	float a,b,c,z;
	printf("Enter three sides of triangle: ");
	scanf("%f%f%f",&a,&b,&c);
	z=aroft(a,b,c);
	printf("Area of triangle: %.2f\n",z);
}
float aroft(float a,float b, float c)
{
	float s,m;
	s=(a+b+c)/2;
	m=sqrt(s*(s-a)*(s-b)*(s-c));
	return(m);
}