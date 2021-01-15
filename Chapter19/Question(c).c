/*Suppose a file contains student's records with each record containing
name and age of a student. Write a program to read these records and
display them in sorted order by name.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    struct student{
        char name[40];
        int age;
    };
    struct student s, student[10],temp;
    int j,k,n;
    fp=fopen("student.DAT","rb");
    n=0;
    if(fp==NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        student[n]=s;
        n++;
    }
    for(j=0;j<n-1;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(strcmp(student[j].name,student[k].name)>0)
            {
                temp=student[j];
                student[j]=student[k];
                student[k]=temp;
            }
        }
    }
    fclose(fp);
    for(j=0;j<n;j++)
        printf("Name: %s\t,age: %d\n",student[j].name,student[j].age);
}
