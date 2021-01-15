/*If a five-digit number is input through the keyboard,
 write a program to calculate the sum of its digits.*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Number to find sum of its digit: ");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;     //to get last digit of number
        sum=sum+i;
        n=n/10;        //remaining digit
    }
    printf("Sum of its digits: %d\n",sum);
}
