/*For the following set of sample data, compute the 
standard deviation and the mean.
goto pdf; */
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=15,data[15]={-6,-12,8,13,11,6,7,2,-6,-9,2,11,10,9,-10};
	float xi,std[15],mean=0;
	printf("sample data:\n");
	for(i=0;i<=14;i++)
	{
		printf("%d\t",data[i]);
	}
	//calculate mean for given data
	for(i=0;i<=14;i++)
		mean=mean+data[i];
	mean=mean/n;
	//calculate standard deviation
	for(i=0;i<=14;i++)
		std[i]=sqrt(pow((data[i]-mean),2))/n;
	//print result
	printf("\nMean=%f\n",mean);
	for (i=0;i<=14;i++)
		printf("standard deviation of %d =%f\n",data[i],std[i]);
}