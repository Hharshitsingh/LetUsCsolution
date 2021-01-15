/*In order to save disk space, information about student is stored in an
integer variable. If bit number 0 is on then it indicates 1 year student,
bit number 1 to 3 stores IInd year, year and IVh year student respectively.
Bits 4 to 7 store the stream Mechanical, Chemical, Electronics and CS.
Rest of the bits store room number.
Such data for 4 students is stored in the following array:
int data[]={ 273,548,786,1096 };
Write a program that uses this data and displays the information about the
student.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,c,mo;
    int data[]={273,548,786,1096 };
    printf("Enter the room numbers: ");
    scanf("%d",&num);
    //check if data matches
    for(c=0;c<4;c++)
    {
        mo=(data[c]>>8);
        if(num==mo)
            break;
    }
    if(c==4)
    {
        printf("No such data present\n");
        exit(1);
    }
    for(c=1;c<=8;c*=2)
    {
        if((num&c)==c)
            break;
    }
    //determine the year
    switch(c)
    {
    case 1:
        printf("The student is of first year\n");
        break;
    case 2:
        printf("The student is of second year\n");
        break;
    case 4:
        printf("The student is of third year\n");
        break;
    case 8:
        printf("The student is of fourth year\n");
        break;
    }
    for(c=16;c<=128;c*=2)
    {
        if((num&c)==c)
            break;
    }
    //determine the branch
    switch(c)
    {
    case 16:
        printf("The student is of mechanical branch");
        break;
    case 32:
        printf("The student is of chemical branch");
        break;
    case 64:
        printf("The student is of electronics branch");
        break;
    case 128:
        printf("The student is of IT branch");
        break;
    }
}
