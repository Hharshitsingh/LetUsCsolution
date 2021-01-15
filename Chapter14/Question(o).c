/*For the following set of n data points (x, y), 
write a program to compute the correlation coefficient, given by
goto pdf: */
#include<stdio.h>
int main()
{
	int n=10,i;
	float a,b;
	float x[10]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0};
	float y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
	float sx=0.0,sxy=0.0,sy=0.0,sxs=0.0;
	float r1,r2,mx=0.0,my=0.0,yy;
	for(i=0;i<=9;i++)
	{
		sx=sx+x[i]; 	//summation of X
		sxy=sxy+x[i]; 	//summation of XY
		sy=sy+y[i];		//summation of Y
		sxs=sxs+x[i]*x[i]; 	//summation of square of X
	}
	printf("\n%cX=%.2f\n",228,sx);
	printf("%cY=%.2f\n",228,sy);
	printf("%cXY=%.2f\n",228,sxy);
	printf("%cXX=%.2f\n",228,sxs);

	r1=(n*sxy-sx*sy);
	r2=((n*sxs)-(sx*sx));
	b=r1/r2;
	printf("\nr1=%.2f\n",r1);
	printf("r2=%.2f\n",r2);
	printf("value of b=%.2f\n",b);
	mx=sx/n; //mean of x
	my=sy/n; //mean of y
	a=my-b*mx;
	printf("Value of a=%f\n",a);
	printf("Equation of the line is: Y=%.2f*X%+.2f\n\n",b,a);
}