/*Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it
continuously by 8 till dividend doesn't become zero, then
write the remainders obtained in reverse direction.)*/
#include<stdio.h>
int main()
{
    int num, r, rem=0, oct=0, flag=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    r = num;
    while(r!=0)
    {
        rem = rem*10 + r%8;
        if(rem == 0)
            flag=1;
        r = r/8;
    }
    while(rem!=0)
    {
        oct = oct*10 + rem%10;
        rem = rem/10;
    }
    if (flag == 1)
    {
        oct = oct*10;
    }
    printf("The octal of %d: %d.\n",num, oct);
}