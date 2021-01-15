/*In an inter-college competition, various sports like cricket,
basketball, football, hockey, lawn tennis, table tennis, carom
and chess are played between different colleges. The information
regarding the games won by a particular college is stored in bit
numbers 0,1,2,3,4,5,6,7 and 8, respectively of an integer variable
called game. The college that wins in 5 or more than 5 games is
awarded the Champion of Champions trophy. If a number representing
the bit pattern mentioned above is entered through the keyboard then
write a program to find out whether the college won the Champion of
the Champions trophy or not, along with the names of the games won
by the college.*/
#include<stdio.h>
int main()
{
    int game,c,count=0;
    printf("Enter any number: ");
    scanf("%d",&game);
    //count the number of games won
    for(c=1;c<=256;c*=2)
    {
        if((game&c)==c)
            count++;
    }
    printf("Matches won by collages are: %d\n",count);
    if(count>=5)
    {
        printf("collages has won champion of champions trophy\n");
        printf("The game won by the collages are:\n");
        if((game&1)==1)
            puts("Cricket");
        if((game&2)==2)
            puts("Basketball");
        if((game&4)==4)
            puts("Football");
        if((game&8)==8)
            puts("Hockey");
        if((game&16)==16)
            puts("Lawn Tennis");
        if((game&32)==32)
            puts("Table Tennis");
        if((game&64)==64)
            puts("Carom");
        if((game&128)==128)
            puts("Chess");
    }
}
