/*Consider a currency system in which there are
notes of seven denominations, namely, 
Rs.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100.
If a sum of Rs. N is entered through the keyboard,
write a program to compute the smallest number of notes that
will combine to give Rs.N */
#include<stdio.h>
int main()
{
	int N,o1=0,t2=0,f5=0,t10=0,f50=0,o100=0;
	printf("Enter Amount you have: ");
	scanf("%d",&N);
	if(N>=100)
	{
		o100 = N/100;
		N = N%100;
	}
	

    if(N>=50)
    {
        f50 = N/50;
        N = N%50;
    }

    if(N>=10)
    {
        t10 = N/10;
        N = N%10;
    }
    if(N>=5)
    {
        f5 = N/5;
        N = N%5;
    }
    if(N>=2)
    {
        t2 = N/2;
        N = N%2;
    }
    if(N>=1)
    {
        o1 = N;
    }
    printf("Rs.100=%d\nRs.50=%d\nRs.10=%d\nRs.5=%d\nRs.2=%d\nRs.1=%d\n",o100,f50,t10,f5,t2,o1);
}