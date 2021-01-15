/*Write a program to copy contents of one file to another. While
doing so replace all lowercase characters to their equivalent
uppercase characters.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fs,*ft;
    char ch;
    fs=fopen("file1.txt","r"); //read source file
    if(fs==NULL)
    {
        printf("file1 not found\n");
        exit(1);
    }
    ft=fopen("file2.txt","a");  //open target file in append  mode
    if(ft==NULL)
    {
        printf("file2 not found\n");
        exit(1);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
        {
            if(islower(ch))
                fputc(toupper(ch),ft);
            else
                fputc(ch,ft);
        }
    }
    printf("File copied!\n");
    fclose(fs);
    fclose(ft);
}
