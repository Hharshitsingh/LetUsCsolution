/*Two numbers are entered through the keyboard. 
Write a program to find the value of one number
raised to the power of another.*/
#include<stdio.h>
int main()
{
    int a,b,i,c=1;
    printf("Enter Two numbers first number raised to the power of second: ");
    scanf("%d%d",&a,&b);
        for(i=1;i<=a;i++)
        {
            c=c*b;
        }
    printf("%d power of %d: %d",a,b,c);
}