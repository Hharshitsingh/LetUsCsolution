/*Write a program that merges lines alternatively from two files and
writes the results to new file. If one file has less number of lines
than the other, the remaining lines from the larger file should be
simply copied into the target file.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *f1,*f2,*ft;
    char str1[100],str2[100];
    char *ptrch;
    int flag=0;
    f1=fopen("file1.txt","r");
    if(f1==NULL)
    {
        printf("file1 not found\n");
        exit(1);
    }
    f2=fopen("file2.txt","r");
    if(f2==NULL)
    {
        printf("file2 not found\n");
        exit(1);
    }
    ft=fopen("file3.txt","a");
    if(ft==NULL)
    {
        fclose(f1);
        fclose(f2);
        printf("file3 not found\n");
        exit(1);
    }
    //read source files and copy the string alternatively
    //read till the FOF reached
    while(fgets(str1,99,f1)!=NULL);
    {
        ptrch=strchr(str1,'\n');
        fputs(str1,ft);
        if(!ptrch)
            fputs("\n",ft);
        if(fgets(str2,99,f2)!=NULL)
        {
            fputs(str2,ft);
            ptrch=strchr(str2,'\n');
            flag=1;
            if(!ptrch)
                fputs("\n",ft);
        }
        else
            fputs("\n",ft);
    }
    //copy the contents of the file whose EOF is not reached
    if(flag==1)
    {
        while(fgets(str2,99,f2)!=NULL)
        {
            ptrch=strchr(str1,'\n');
            fputs(str2,ft);
            if(ptrch)
                fputs("\n",ft);
        }
    }
    printf("Copying file completed!\n");
    fclose(f1);
    fclose(f2);
    fclose(ft);
}
