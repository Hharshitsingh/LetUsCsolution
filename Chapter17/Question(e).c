/*There is a structure called employee that holds information like 
employee code, name and date of joining. Write a program to create 
an array of structures and enter some data into it. Then ask the 
user to enter current date. Display the names of those employees 
whose tenure is greater than equal to 3 years.*/
#include<stdio.h>
void add_em_data(int);
void display(int);
void ck_tenu(int,int,int,int);
struct employee
    {
        char name[40];
        int code,doj,moj,yoj;
    };
    struct employee e[200];
int main()
{
	int j,d,m,y;
	printf("How many employees data you have to enter: ");
	scanf("%d",&j);
	add_em_data(j); //take input of employees
	printf("\nEmployees list\n");
	display(j); 	//display input of employees 

	printf("\nEnter current date dd/mm/yy: ");
    scanf("%d/%d/%d",&d,&m,&y);
    ck_tenu(j,d,m,y); //check tenure of employees
}
void add_em_data(int j)
{
	int i;
	for(i=0;i<j;i++)
    {
    	printf("Enter %d employee code: ",i+1);
    	scanf("%d",&e[i].code);
        printf("Enter employee name: ");
        while(getchar()!='\n');
        scanf("%[^\n]s",e[i].name);   
        printf("Enter date of joining dd/mm/yy: ");
        scanf("%d/%d/%d",&e[i].doj,&e[i].moj,&e[i].yoj);
     }
}
void display(int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("%d employee\n",i+1);
		printf("Employee code: %d\n",e[i].code);
		printf("Employee name: %s\n",e[i].name);
		printf("Date of joining: %d/%d/%d\n",e[i].doj,e[i].moj,e[i].yoj);
	}
}
void ck_tenu(int j,int d,int m,int y)
{
	int i,yr,flag=0;
	printf("\nEmployees whose tenure is greater than equal to 3 years\n");
	for(i=0;i<j;i++)
    {
        yr=y-e[i].yoj;
        if(yr>3)
        {
            printf("%s\n",e[i].name);
            flag=1;
        }
        else if(yr==3)
        {
        	if(m>e[i].moj)
        		printf("%s\n",e[i].name);
        	else if(m==e[i].moj)
        	{
        		if(d>=e[i].doj)
        			printf("%s\n",e[i].name);
        	}
        flag=1;
        }    
    }
    if(flag==0)
    	printf("All employees tenure is less than 3 years\n");
}