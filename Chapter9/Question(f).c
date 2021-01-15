/*Write a function to compute the distance between two 
points and use it to develop another function that will 
compute the area of the triangle whose vertices are A(x1, y1), 
B(x2, y2), and Cx3, y3). Use these functions to develop a 
function which returns a value 1 if the point (x, y) lines 
inside the triangle ABC, otherwise returns a value 0.*/
#include<stdio.h>
#include<math.h>
float dist(int x1, int y1, int x2, int y2);
float area();
int main()
{
	int x1,x2,y1,y2;
	float z,x;
	printf("Enter the co-ordinates of two points: ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	z=dist(x1,y1,x2,y2);
	printf("Distance between two points: %.2f\n",z);
	x=area();
	printf("Area of triangle=%.2f\n",x);
}
//to clculate distance
float dist(int x1, int y1, int x2, int y2)
{
	float m;
	m=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return(m);
}
float area() //to calculate vertices of triangle
{
	float tria(float,float,float);
	float a,b,c,d;
	int x1,x2,x3,x4,y1,y2,y3,y4;
	float area1,area2,area3,totarea;
	float a1,b1,c1;
	printf("\nEnter co-ordinates of three points: ");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a=dist(x1,y1,x2,y2);
	b=dist(x1,y1,x3,y3);
	c=dist(x2,y2,x3,y3);
	d=tria(a,b,c);

	a1=dist(x1,y1,x4,y4);
	b1=dist(x2,y2,x4,y4);
	c1=dist(x3,y3,x4,y4);

	area1=tria(a,a1,b1);
	area2=tria(b,a1,c1);
	area3=tria(c,b1,c1);
	totarea=area1+area2+area3;

	if((totarea-d)<=0.0009)		//0.0009 used the anomoly in floating point calculations
		printf("point(%d,%d)is inside the triangle\n",x4,y4);
	else
		printf("point(%d,%d)is outside the triangle\n",x4,y4);
	return d;
}
float tria(float a,float b,float c)
{
	float s,x;
	s=(a+b+c)/2;
	x=sqrt(s*(s-a)*(s-b)*(s-c));
	return(x);
}