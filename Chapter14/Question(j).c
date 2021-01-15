/*Given an array p[ 5 ], write a function to shift it 
circularly left by two positions. Thus, if p[0] = 15, 
p[ 1 ]= 30, p[ 2 ] = 28, p[ 3 ]= 19 and p[ 4] =61 then 
after the shift p[ 0] = 28, p[ 1 ] = 19, p[ 2 ] = 61, 
p[ 3] = 15 and p[ 4 ] = 30. Call this function for a (4 x 5 ) 
matrix and get its rows left shifted.*/
#include<stdio.h>
void swap(int *);
int main()
{
	int i,j,p[4][5]={};
	printf("Enter elements of 4x5 matrix\n");
	for(i=0;i<=3;i++)
		for(j=0;j<=4;j++)
			scanf("%d",&p[i][j]);
	printf("matrix\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
	swap(&p[0][0]); 	//base address of array passed to function

	printf("matrix after left shifting\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
void swap(int*p)
{
	int i,j,k,t,tt;
	for(k=0;k<=3;k++)  // 4 rows to be shifted
	{
		for(i=0;i<=1;i++)  //shifting on twice
		{
			t=*(p+k*5+0);
			for(j=0;j<=3;j++)
			{
				tt=*(p+k*5+j);
				*(p+k*5+j)=*(p+k*5+j+1);
				*(p+k*5+j+1)=tt;
			}
			*(p+k*5+j)=t;
		}
	}
}