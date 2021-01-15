/*If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/
#include<stdio.h>
int main()
{
	int R,S,A;
	printf("Enter age of Ram: ");
	scanf("%d",&R);
	printf("Enter age of Shyam: ");
	scanf("%d",&S);
	printf("Enter age of Ajay: ");
	scanf("%d",&A);
	if(R<S&&R<A)
		printf("Ram is youngest\n");
	else if(S<A)
		printf("Shyam is youngest\n");
	else 
		printf("Ajay is youngest\n");
}