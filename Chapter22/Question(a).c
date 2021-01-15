/*Create an array of four function pointers. Each pointer should
point to a different function. Each of these functions should
receive two integers and return a float. Using a loop call each
of these functions using the addresses present in the array.*/
#include<stdio.h>
float fun1(int,int);
float fun2(int,int);
float fun3(int,int);
float fun4(int,int);
int main()
{
    float (*ptr[4])(int,int);
    float f;
    int i;
    ptr[0]=fun1;
    ptr[1]=fun2;
    ptr[2]=fun3;
    ptr[3]=fun4;
    for(i=0;i<4;i++)
    {
        f=(*ptr[i])(100,i+1);
        printf("\t%.2f\n",f);
    }
}
float fun1(int i,int j)
{
    printf("\nfun1\ti=%d\tj=%d",i,j);
    return(float)(i/j);
}
float fun2(int i,int j)
{
    printf("\nfun2\ti=%d\tj=%d",i,j);
    return(float)(i/j);
}
float fun3(int i,int j)
{
    printf("\nfun3\ti=%d\tj=%d",i,j);
    return(float)(i/j);
}
float fun4(int i,int j)
{
    printf("\nfun4\ti=%d\tj=%d",i,j);
    return(float)(i/j);
}
