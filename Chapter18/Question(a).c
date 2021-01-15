/*Define two functions xgets() and xputs() which work similar to the
standard library functions gets() and puts().*/
#include<stdio.h>
void xputs(char *);
void xgets(char *);
int main()
{
    char sent[100];
    xputs("Enter a sentence: ");
    xgets(sent);
    printf("\n\n");
    xputs(sent);
}
void xputs(char *s)
{
    while(*s)
    {
        putch(*s);
        s++;
    }
}
void xgets(char *s)
{
    int i;
    char ch;
    for(i=0;i<=98;i++)
    {

        ch=getche();
        if(ch=='\r')
        {
            *s='\0';
            break;
        }
        if(ch=='\b')
        {
            printf("\b");
            i--;
            s--;
        }
        else
        {
            *s=ch;
            s++;
        }
    }
}
