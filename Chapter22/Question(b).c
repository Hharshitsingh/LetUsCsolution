/*Write a function that receives variable number of arguments,
where the arguments are the coordinates of a point. Based on
the number of arguments received, the function should display
type of shape like a point, line, triangle, etc., that can be drawn.*/
#include<stdio.h>
void shape(int,...);
int main()
{
    shape(2,5,10);
    shape(4,1,1,10,1);
    shape(6,15,10,5,25,20,25);
}
void shape(int tot_pt,...)
{
    switch(tot_pt)
    {
    case 2:
        printf("1. Type of shape is point\n");
        break;
    case 4:
        printf("2. Type of shape is line\n");
        break;
    case 6:
        printf("3. Type of shape is triangle\n");
        break;
    }
}
