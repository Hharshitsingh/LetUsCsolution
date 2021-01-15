/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number 
of subjects he has failed in. Use the following logic:

-If the student gets first class and the number of subjects
he failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.

-If the student gets second class and the number of subjects 
he failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.

-If the student gets third class and the number of subjects he 
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.*/
#include<stdio.h>
int main()
{
	int c,sub;
	printf("Enter class and subjects failed: ");
	scanf("%d%d",&c,&sub);
	switch(c)
	{
		case 1:
			if(sub<=3)
				printf("student gets total %d grace marks\n",5*sub);
			else
				printf("No grace marks\n");
			break;
		case 2:
			if(sub<=2)
				printf("student gets total %d grace marks\n",4*sub);
			else
				printf("No grace marks\n");
			break;
		case 3:
			if(sub==1)
				printf("student gets total 5 grace marks\n");
			else
				printf("No grace marks\n");
			break;
		default:
			printf("Wrong Class\n");
	}
}