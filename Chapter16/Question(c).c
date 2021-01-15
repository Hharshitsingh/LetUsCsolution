/*Write a program to sort a set of names stored in an 
array in alphabetical order.*/
#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,r,n;
   char str[40][40],s[40];
   printf("How many names u are going to enter?: ");
   scanf("%d",&n);
   printf("Enter Strings one by one: ");
   for(i=0;i<n;i++)
   {
   	  while(getchar()!='\n');
      scanf("%[^\n]",str[i]);
   }
   for(j=0;j<n;j++)
   {
   		for(i=0;i<n;i++)
      	{
      		r=strcmp(str[i],str[i+1]);
        	 if(r>0)
        	 {
	            strcpy(s,str[i]);
	            strcpy(str[i],str[i+1]);
	            strcpy(str[i+1],s);
         	 }
      	}
   }
   printf("Order of Sorted Strings: ");
   for(i=0;i<=n;i++)
      printf("%s\n",str[i]);
}