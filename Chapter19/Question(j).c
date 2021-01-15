/*Given a list of names of students in a class, write a program to store the
names in a file on disk. Make a provision to display the nth names in the
list, where n read from keyboard.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char name[25],ano='y';
    int num,n;
    fp=fopen("student.dat","a");
    if(fp==NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    //Loop for data entry
    while(ano=='y'||ano=='Y')
    {
        printf("Enter the name of student: ");
        while(getchar()!='\n');
        scanf("%[^\n]",&name);
        fputs(name,fp);     //write data to file
        fputs("\n",fp);     //put newline
        printf("Do you want to add more names: ");
        while(getchar()!='\n');
        scanf("%c",&ano);
    }
    fseek(fp,0L,SEEK_SET);      //file pointer reset to start of the file
    printf("\n Enter any number from the list: ");
    scanf("%d",&num);
    n=num;
    while(fgets(name,25,fp)!=NULL)
    {
        num--;      //count downward to reach the required record
        if(num==0)
            printf("\n The name of student no.%d: %s",n,name);
    }
    if(num>0)
        printf("No such number exits in the list\n");
   fclose(fp);
}

