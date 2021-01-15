/*Define a function getfloat(), which would receive a numeric string
from the keyboard, convert it to a float value and return the float
to the calling function.*/
#include<stdio.h>
float getfloat();
int main()
{
    float fresult=0.0f;
    fresult=getfloat();
    printf("After converting string to float: %.2f\n",fresult);
}
float getfloat()
{
    char str[7]="1234.56";
    float temp=0.0f,result=0.0f;
    int i,j,decimal;
    for(i=0;str[i]!='.';i++)
        result=(result*10)+str[i]-'0';
    decimal=1;
    for(j=i+1;str[j]!='\0';j++)
    {
        temp=str[j]-'\0';
        decimal=decimal*10;
        temp=temp/decimal;
        result=result+temp;
    }
    return result;
}
