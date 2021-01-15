/*A record contains name of cricketer, his age, number of test 
matches that he has played and the average runs that he has scored 
in each test match. Create an array of structures to hold records of 
20 such cricketers and then write a program to read these records and 
arrange them in ascending order by average runs. Use the qsort() 
standard library function.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct record
{
    char name[20];
    int age;
    int tests;
    float avg_runs;
};
struct record p[20];
compare(const void * a, const void * b);

void main()
{
	int i;
	for(i=0;i<20;i++) 
	{
	    printf("Enter data of cricketer %d\n\n\n",i+1);
	    printf("Name: ");
	    scanf("%[^\n]",p[i].name);

	    printf("\n\nAge: ");
	    scanf("%d",&p[i].age);

	    printf("\n\nMatches: ");
	    scanf("%d",&p[i].tests);

	    printf("\n\nAverage runs: ");
	    scanf("%f",&p[i].avg_runs);
	    while(getchar()!='\n');
   }

	qsort(p,20,sizeof(struct record),compare);
	printf("\nAfter sorted\n");
	for(i=0;i<20;i++) 
	    printf("%d\t%s\t%d\t%s\t%d\t%.2f\n",i+1,p[i].name,p[i].age,"",p[i].tests,p[i].avg_runs);
}
int compare(const void * a, const void * b)
{
	return (((struct record *)a)->avg_runs-((struct record *)b)->avg_runs);
}