/*Given three points (x1, y1), (x2, y2) and (x3, y3), 
write a program to check if all the three points fall on one straight line.*/
#include <stdio.h>
#include <math.h>
 #include<stdlib.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	float s1,s2,s3;
	printf("Enter Value of x1 and y1 coordinate of first points: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter Value of x2 and y2 coordinate of second points: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter Value of x3 and y3 coordinate of third points: ");
	scanf("%d%d",&x3,&y3);
	//calculate slope of line between each pair of points
	s1=abs(x2-x1)/abs(y2-y1);
	s2=abs(x3-x1)/abs(y3-y1);
	s3=abs(x3-x2)/abs(y3-y2);
	if((s1==s2)&&(s1==s3))
		printf("Points are Co-linear\n");
	else
		printf("Points are not Co-linear\n");
}