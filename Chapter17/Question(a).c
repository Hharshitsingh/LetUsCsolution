/*Create a structure called student that can contain data given below
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college 
(1) Write a function to print names of all students who joined in a 
particular year.
(2) Write a function to print the data of a student whose roll number 
is received by the function.*/
#include<stdio.h>
//global declartion 
struct student
{
	int r_n,y_o_j;
	char name[40];
	char dept[30];
	char cour[30];
};
struct student s[450]; //array of structure
void set_student_data(int);
void display(int);
void name_acc_year(int,int);
void data_acc_rollno(int,int);
int main()
{
	int j,r,y;
	printf("How many students information you have to enter: ");
	scanf("%d",&j);
	printf("Enter the data for each student: \n");
	set_student_data(j);		//initialize the value for the student structure
	display(j);		//display the element of the student structure
	//search data on year of joining
	printf("\nEnter the year of joining of the student: ");
	scanf("%d",&y);
	name_acc_year(y,j); //year of joining passed to function
	//search data based on rollno.
	printf("\nEnter the Roll number of the student: ");
	scanf("%d",&r);
	data_acc_rollno(r,j); //roll number passed to function
}
void set_student_data(int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("\nEnter Roll number of the student: ");
		scanf("%d",&s[i].r_n);

		printf("Enter the name of student: ");
		while(getchar()!='\n');		//clear input buffer
		scanf("%[^\n]",&s[i].name);

		printf("Enter the name of department: ");
		while(getchar()!='\n');
		scanf("%[^\n]",&s[i].dept);

		printf("Enter the name of Course: ");
		while(getchar()!='\n');
		scanf("%[^\n]",&s[i].cour);

		printf("Enter the Year of joining of the student: ");
		scanf("%d",&s[i].y_o_j);
	}
}
void display(int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("\n%d\n",i+1);
		printf("Roll number of Student=%d\n",s[i].r_n);
		printf("Name of Student=%s\n",s[i].name);
		printf("Name of Department: %s\n",s[i].dept);
		printf("Name of Course: %s\n",s[i].cour);
		printf("Year of joining of student= %d\n",s[i].y_o_j);
	}
}
void name_acc_year(int y,int j)
{
	int i,k=0;
	for(i=0;i<j;i++)
	{
		if(y==s[i].y_o_j)
		{
			printf("\n%s joined in the year %d\n",s[i].name,s[i].y_o_j);
			k=1;
		}
	}
	if(k==0)
		printf("No student joined in this Year\n");
}
void data_acc_rollno(int r, int j)
{
	int i,k=0;
	for(i=0;i<j;i++)
	{
		if(s[i].r_n==r)
		{
			printf("\nRoll number of Student=%d\n",s[i].r_n);
			printf("Name of Student=%s\n",s[i].name);
			printf("Name of Department: %s\n",s[i].dept);
			printf("Name of Course: %s\n",s[i].cour);
			printf("Year of joining of student= %d\n",s[i].y_o_j);
			k=1;
		}
	}
	if(k==0)
		printf("No Such Roll Number present.\n");
}
