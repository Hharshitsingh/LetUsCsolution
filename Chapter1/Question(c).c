/*f the marks obtained by a student in five different subjects 
are input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student 
in each subject is 100.
*/
#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,aggr,per;
	printf("Enter marks in 5 subject: ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	aggr=s1+s2+s3+s4+s5;
	per=aggr/5;
	printf("Aggregate: %.2f\n",aggr);
	printf("Percentage: %.2f\n",per);
}