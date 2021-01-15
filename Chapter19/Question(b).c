/*Write a program to append the contents of one file at the end of another.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *f1,*f2,*ft;
    char str1[100],str2[100];
    char *ptrch;
    int flag=0;
    f1=fopen("file1.txt","r"); //open file in read mode
    {
        if(f1==NULL)
        {
            printf("File1 not found\n");
            exit(1);
        }
        f2=fopen("file2.txt","r");
        if(f2==NULL)
        {
            printf("File2 not found\n");
            exit(1);
        }
        ft=fopen("file3.txt","a");  //open file in append moode
        if(ft==NULL)
        {
            fclose(f1);
            fclose(f2);
            printf("File3 not found\n");
            exit(1);
        }
        //read the file1 and file2 and copy them one after another
        //read till the EOF of the first file is reached
        while(fgets(str1,99,f1)!=NULL)
        {
            ptrch=strchr(str1,'\n');
            fputs(str1,ft);
            if(!ptrch)
                fputs("\n",ft);
        }
        //copy the contents of second file
        while(fgets(str2,99,f2)!=NULL)
        {
            ptrch=strchr(str2,'\n');
            fputs(str2,ft);
            if(!ptrch)
                fputs("\n",ft);
        }
        printf("Copying file completed!\n");
        fclose(f1);
        fclose(f2);
        fclose(ft);
    }
}
