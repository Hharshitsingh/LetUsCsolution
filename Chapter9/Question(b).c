/*Write a function that receives marks obtained by a student 
in 3 subjects and returns the average and percentage of these 
marks. Call this function from main() and print the results in 
main().Consider marks obtained by a student out of 100 marks for
each subject*/
#include<stdio.h>
void stdu(int*,int*,float*,float*);
int main()
{
	int sum,i,a[3]={};
	float avg,per;
	printf("Enter your marks in 3 subjects: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	stdu(&a[0],&sum,&avg,&per);
	printf("Sum=%d\tAverage=%.2f\tPercent=%.2f\n",sum,avg,per);
}
void stdu(int*k,int*sum,float*avg,float*per)
{
	int i,s=0;
	for(i=0;i<3;i++)
	{
		s=s+*k;
		k++;
	}
	*sum=s;
	*avg=s/3;
	*per=(s*100)/300;
}