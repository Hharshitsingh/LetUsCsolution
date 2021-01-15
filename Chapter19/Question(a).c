/*Write a program to read a file and display its contents along
with line numbers before each line.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int count=1;
    fp=fopen("file1.txt","r");    //file1.txt open in read mode
    if(fp==NULL)
    {
        printf("File not found\n");
        exit(1);        //exit due to some error
    }
    printf("file1.txt\n");
    printf("\nLine:-%d\t",count);
    while((ch=getc(fp))!=EOF)       //EOF means end of file
    {
        if(ch=='\n')
        {
            count++;
            printf("\nLine:-%d\t",count);
        }
        else
            printf("%c",ch);
    }
    fclose(fp);         //close file
}
//you open this file in read mode so, this file must be present in your system
