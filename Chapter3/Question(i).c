/*Given the length and breadth of a rectangle, 
write a program to find whether the area of the 
rectangle is greater than its perimeter.
For example, the area of the rectangle with 
length = 5 and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>
int main()
{
	int l,b,per,ar;
	printf("Enter length and breadth of rectangle: ");
	scanf("%d%d",&l,&b);
	ar=l*b;
	per=2*(l+b);
	if(ar>per)
		printf("area is greater than perimeter\n");
	else
		printf("perimeter is greater than area\n");
}