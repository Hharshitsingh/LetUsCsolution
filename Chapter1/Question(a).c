/*Ramesh's Basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and 
house rent allowance is 20% of basic salary. 
write a Programe to Calculate gross salary of Ramesh*/
#include<stdio.h>
int main()
{
	float bp,da,hra,grpay;
	printf("Enter Basuc salary of Ramesh: ");
	scanf("%f",&bp);
	da=40*bp/100;
	hra=20*bp/100;
	grpay=bp+da+hra;	//Gross Pay=sum of basic & all alowanaces
	printf("basic salary of Ramesh=%.2f\n",bp);
	printf("Dearness allowanace=%.2f\n",da);
	printf("House Rent allowanace=%.2f\n",grpay);
}