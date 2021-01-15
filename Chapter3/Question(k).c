/*Given the coordinates (x, y) of center of a circle and its radius, 
write a program that will determine whether a point lies inside the circle,*/
#include<stdio.h>
int main()
{
	int x,y,r,dis,d;
	printf("Enter radius of circle: ");
	scanf("%d",&r);
	printf("Enter coordinates of circle at point (x,y): ");
	scanf("%d%d",&x,&y);
	dis=(x*x)+(y*y);
	d=r*r;
	if(dis==d)
		printf("Point is on the circle\n");
	else if(dis>d)
		printf("Point is outside the circle\n");
	else
		printf("Point is inside the circle\n");
}