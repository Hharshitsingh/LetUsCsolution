/*Write a program to read and store information about insurance policy
holder. The information contains details like gender, whether the
holder is minor/major, policy name and duration of the policy.
Make use of bit-fields to store this information.*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct policy
    {
        unsigned gender:1;  //0-male,1-female
        unsigned status:1;  //0-minor,1-major
        char name[20];
        unsigned dr:5;
    };
    struct policy h;
    int g,s,d;
    char n[20];
    printf("Enter gender(0-Male,1-Female) of the policy holder: ");
    scanf("%d",&g);
    printf("Enter status(0-Minor,1-Major) of the policy holder: ");
    scanf("%d",&s);
    printf("Enter name of policy holder: ");
    while(getchar()!='\n');
    scanf("%[^\n]",n);
    printf("Enter duration of the policy: ");
    scanf("%d",&d);
    h.gender=g;
    h.status=s;
    strcpy(h.name,n);
    h.dr=d;
    printf("\nName: %s\n",h.name);
    printf("Gender: %s\n",h.gender==0?"Male":"Female");
    printf("Status:%s\n",h.status==0?"Minor":"Major");
    printf("Duration: %d",h.dr);
}

