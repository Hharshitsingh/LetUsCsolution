/*Write a C function to evaluate the series
sin(x) = x-(x^3/3!)+(x^5/5!)-(x^7/7!)+..
up to 10 terms.*/
#include<stdio.h>
#include<math.h>
float numn(float, int);
float deno(int);
int main()
{
	float n,x,a,b,sum=0;
	int i,j;
	printf("Enter Value of x: ");
	scanf("%f",&x);
	for(i=0;i<=10;i++)
	{
		for(j=1;j<=10;j+=2)
		{
			a=numn(x,j);
			b=deno(j);
			n=a/b;
			(i%2==0)?sum=sum-n:(sum=sum+n);
		}
	}
	printf("Sum: %.2f\n",sum);
}
float numn(float y,int j)		//calculate power
{
	int m;
	float k=1;
	for(m=1;m<=j;m++)
		k=k*y;
	return(k);
}
float deno(int j)  		//Calculate factorial
{
	int m;
	float h=1;
	for(m=1;m<=j;m++)
		h=h*m;
	return(h);
}