/*An animal could be a canine(dog,wolf,fox,etc.), a
feline(cat,lynx,jaguar,etc.), a cetacean(whale, narwhal, etc.)
or a marsupial (koala,wombat,etc.). The information whether a
particular animal is canine, feline, cetacean, or marsupial is
stored in bit number 0,1,2 and 3, respectively of a integer variable
called type. Bit number 4 of the variable type stores the information
about whether the animal is Carnivore or Herbivore.
For the following animal, complete the program to determine whether the
animal is a herbivore or a carnivore. Also determine whether the animal
is a canine, feline, cetacean or a marsupial.

struct animal
{
char name[30]; int type;
}
struct animal a = { "OCELOT", 18};*/
#include<stdio.h>
int main()
{
    struct animal
    {
        char name[30];
        int type;
    };
    static struct animal a={"OCELOT",18};
    int ani;
    printf("Animal is: ");
    ani=a.type;
    if((ani&1)==1)
            puts("Canine");
    if((ani&2)==2)
            puts("Feline");
    if((ani&4)==4)
            puts("Catacean");
    if((ani&8)==8)
            puts("Marsupia");
    puts("Animal is also");
    if((ani&16)==16)
            puts("Carnivore");
    else
        printf("Herbivore\n");
}
