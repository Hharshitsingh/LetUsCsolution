/*A positive integer is entered through the keyboard, 
write a function to find the binary equivalent of this number:
(1) Without using recursion. 
(2) Using recursion.*/
#include <stdio.h> 
int btd(int);  //without recursion
int rbtd(int);		//with recursion
int main() 
{ 
    int n,bie,rbie;
    printf("Enter an integer: ");
    scanf("%d",&n);
    bie=btd(n);
    rbie=rbtd(n); 
    printf("Binary equivalent without recursion: %d\n",bie);
    printf("Binary equivalent using recursion: %d\n",rbie); 
    return 0; 
}
int rbtd(int n) 
{ 
    if(n==0)  
        return 0;  
    else
        return(n%2+10*rbtd(n/2)); 
}
int btd(int n)
{
    int sum=0,rem,i=1;
    while (n != 0) 
    {
        rem = n%2;
        n=n/2;
        sum = sum+rem*i;
        i=i*10;
    }
   return sum;
}