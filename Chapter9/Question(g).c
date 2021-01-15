/*Write a function to compute the greatest common divisor given by 
Euclid's algorithm, exemplified for J=1980, K=1617 as follows:
1980/1617 = 1	1980-1*1617 = 363
1617/363 = 4 	1617-4*363 = 165 
363/165=2		363-2*165=33
5/33=5			165-5*33=0
Thus, the greatest common divisor is 33.*/
#include<stdio.h>
int fun(int,int);
int main()
{
	int j,k,z;
	printf("Enter two numbers: ");
	scanf("%d%d",&j,&k);
	z=fun(j,k);
	printf("greatest commom divisor of the two numbers: %d\n",z);
}
int fun(int j,int k)  	//nature of function is take something return something
{
	int r=1,m,n=0,t;
	if(k>j)	//swap j and k
	{
		t=j;
		j=k;
		k=t;
	}
	else 
	{
		if(j==k)
			return(j);
	}
	while(1)
	{
		r=j/k;
		m=j-(r*k);
		if(!(j%k))		//j is exact multiple of k*/
		 	n=k;
		 if(m==0)
		 	break;
		 j=k;
		 k=m;
		 n=m;
	}
	return(n);
}