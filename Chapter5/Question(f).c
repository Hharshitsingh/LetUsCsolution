/*Write a program for a matchstick game being played between 
the computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/
#include<stdio.h>
int main()
{
	int m=21,p,c;
	while(1)
	{
		printf("No. of matches left= %d\n",m);
		printf("Pick up 1,2,3 or 4 Matches: ");
		scanf("%d",&p);
		if(p>4||p<1)
			continue;
		m=m-p;
		printf("No. of matches left: %d\n",m);
		c=5-p;
		printf("Out of computer picked up: %d\n",c);
		m=m-c;
		if(m==1)
		{
			printf("No. of matches left: %d\n",m);
			printf("you loses the game\n");
			break;
		}
	}
}