/*If cost price and selling price of an item are 
input through the keyboard, write a program to determine 
whether the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.*/
#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter Cost Price of item: ");
	scanf("%d",&cp);
	printf("Enter Selling Price of item: ");
	scanf("%d",&sp);	
	if(cp<sp)
	{
		printf("The seller made profit of Rs.%d\n",sp-cp);
	}
	else if(cp>sp)
	{
		printf("The seller is in loss by Rs.%d\n",cp-sp);
	}
	else 
		printf("There is no loss or profit\n");

}