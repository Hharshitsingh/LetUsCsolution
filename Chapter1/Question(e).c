/*The length and breadth of a rectangle and radius of a 
circle are input through the keyboard. 
Write a program to calculate the area and perimeter of the rectangle, 
and the area and circumference of the circle.*/
#include <stdio.h>
int main()
{
	int l,b,r;
	printf("Entre length and breadth of rectangle: ");
	scanf("%d%d",&l,&b);
	printf("Area of rectangle: %d\n",l*b);
	printf("Perimeter of rectangle: %d\n",2*(l+b));
	printf("Enter radius of circle: ");
	scanf("%d",&r);
	printf("Area of circle: %.2f\n",3.14*r*r);
	printf("circumference of circle: %.2f\n",2*3.14*r);
}