/*Write a function that receives 5 integers and returns the sum, 
average and standard deviation of these numbers. Call this function 
from main() and print the results in main().*/
#include<stdio.h>
#include<math.h>
void sol(int*,int*,float*,float*);
int main()
{
	int sum,i,a[5]={};
	float avg,stdev;
	printf("Enter 5 integers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	sol(&a[0],&sum,&avg,&stdev); //passing address of elements
	printf("Sum=%d\tAverage=%.2f\tStandard Deviation=%.2f\n",sum,avg,stdev);
}
void sol(int *j,int*sum,float*avg,float*stdev)
{
	int i,x=0,y=0;
	float var;
	for(i=0;i<5;i++)
	{
		x=x+*j;
		y=y+(*j**j);
		j++; 	//increment pointer to the point to the next elements
	}
	*sum=x;
	*avg=x/5;
	var=(y/5)-((x/5)*(x/5));
	*stdev=pow(var,0.5);
}