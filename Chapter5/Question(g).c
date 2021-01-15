/*Write a program to enter numbers till the user wants. 
At the end it should display the count of positive, 
negative and zeros entered.*/
#include<stdio.h>
int main()
{
	int pos,neg,zero,num;
	char ans='Y';
	pos=neg=zero=0;
	while(ans=='Y'||ans=='y')
	{
		printf("Enter Number: ");
		scanf("%d",&num);
		if(num==0)
			zero++;
		else if(num>0)
			pos++;
		else if(num<0)
			neg++;
		else;
		while(getchar()!='\n'); //to clear buffer 
		printf("Do you want to continue: ");
		scanf("%c",&ans);
	}
	printf("N. of positive numbers entered by you: %d\n",pos);
	printf("N. of negative numbers entered by you: %d\n",neg);
	printf("N. of zeros entered by you: %d\n",zero);
}
/*about while(getchar()!='\n'); this function is used to clear 
input buffer in linux if you using windows os use 
'fflush(stdin);' function*/ 