/*The information about colors is to be stored in bits of a char
variable called color. Bit numbers 0 to 6, each represent 7
colors of a rainbow, i.e., bit 0 represents violet, 1 represents
indigo, and so on. Write a program that asks the user to enter a
number and based on this number it reports which colors in the rainbow
do the number represents.*/
#include<stdio.h>
int main()
{
     int color;
     printf("Enter any number: ");
     scanf("%d",&color);
     printf("Colors represented are: ");
     if((color&1)==1)
        puts("Violet");
     if((color&2)==2)
        puts("Indigo");
     if((color&4)==4)
        puts("Blue");
     if((color&8)==8)
        puts("Green");
     if((color&16)==16)
        puts("Yellow");
     if((color&32)==32)
        puts("Orange");
     if((color&64)==64)
        puts("Red");
}
