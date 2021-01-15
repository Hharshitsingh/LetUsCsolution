/*Define a function getint(), which would receive a numeric string
from the keyboard, convert it to an integer number and return the
integer to the calling function. A sample usage of getint() is
shown below.
#include<stdio.h>
int main()
{
int a;
a = getint();
printf ( "you entered %d\n", a);
return 0;
}*/
#include<stdio.h>
int getint();
int main()
{
    int a;
    printf("Enter a numeric string: ");
    a=getint();
    printf("You entered %d \n",a);
}
int getint()
{
    char str[6];
    int i,j,k,val;
    i=0;
    while(i<=5)
    {
        str[i]=getche();
        if(str[i]=='\r')
        {
             str[i]='\0';
            break;
        }
        if(str[i]=='\b')
        {
            i--;
            printf("\b");
        }
        else
            i++;
    }
    val=0;
    k=1;
    for(j=i-1;j>=0;j--)
    {
        val=val+(str[j]-48)*k;      //convert numeric value
        k=k*10;
    }
    return(val);
}
