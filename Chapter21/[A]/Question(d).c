/*The time field in a structure is 2 bytes long. Distribution of
different bits which account for hours, minutes and seconds is
given in Figure 21.7. Write a function that would receive the 2-byte
time and return to the calling function, the hours, minutes and seconds.
goto pdf;*/
#include<stdio.h>
void times(unsigned int time);
unsigned short int hr,min,sec;
int main()
{
    int time;
    printf("Enter any number: ");
    scanf("%u",&time);
    times(time);
    printf("For time: %u\n",time);
    printf("Hours: %u\n",hr);
    printf("Minutes: %u\n",min);
    printf("Seconds: %u\n",sec);
}
void times(unsigned int time)
{
    unsigned shortint,temp;
    hr=time>>11;
    temp=time<<5;
    min=temp>>10;
    temp=time<<11;
    sec=(temp>>11)*2;
}
