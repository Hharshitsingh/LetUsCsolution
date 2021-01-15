/*The area of a triangle can be computed by the sine law 
when 2 sides of the triangle and the angle between them are known.
Area=(1/2)absin(angle)
Given the following 6 triangular pieces of land, write a program
to find their area and determine which is largest.
goto pdf;*/
#include<stdio.h> 
#include<math.h>
int main()
{
	float t,a[6]={},b[6]={},angle[6],area[6],largest=0.0; 
	//if you want you can assign given values in array
	int i,plot;
	for (i = 0;i<= 5; i++)
	{
		printf("\nEnter the values of the following data: ");
		printf("\n%d=",i+ 1);
		scanf("%f",&a[i]);
		printf("\nb%d=",i+1);
		scanf("%f",&b[i]);
		printf("\nangle%d=",i+1);
		scanf("%f",&angle[i]);
		//Calculate area 
		area[i]=(1.0/2)*a[i]*b[i]*sin(angle[i]);
		//Note the largest value of area"
		if(area[i]>largest)
		{
			largest=area[i];
			plot=i; //note the element with largest value of area
		}
	}
		//Print area of all plots 
	printf("\nEntered Plot dimensions and respective Area is:\n");
	printf ("\nPlot No.\ta\tb\tAngle\tArea");
	for(i=0;i<=5;i++)
	{
		printf("\n%d\t%.2f\t%.2f\t%.2f\t%.3f",i+1,a[i],b[i],angle[i],area[i]);
	}
	printf("\nLargest triangular area=%.3f having value of a,b,and angle as: ",largest);
	printf("\na=%.2f\tb=%.2f\t%.2f\tAngle=%.2f\n",a[plot],b[plot],angle[plot]);
}