/*Write a program that receives wind speed as input and categorizes the 
hurricane as per the following table:
goto pdf;*/
#include<stdio.h>
#include<string.h>
int main()
{
	struct hurcan
	{
		int lowspeed,highspeed;
		char category[10];
	};
	struct hurcan h[]=
	{
		74,95,"I",
		96,110,"II",
		111,130,"IV",
		155,200,"V"
	};

	int ws,i;
	printf("\nEnter wind speed: ");
	scanf("%d",&ws);
	for(i=0;i<=4;i++)
	{
		if(h[i].lowspeed<=ws&&ws<=h[i].highspeed)
			printf("category of hurricane: %s\n",h[i].category);
	}
}