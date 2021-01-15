/*There are five players from which the Most Valuable Player (MVP) is to be chosen.
Each player is to be judged by 3 judges, who would assign a rank to each player. 
The player whose sum of ranks is highest is chosen as MVP. Write a program to 
implement this scheme.*/
#include<stdio.h>
#include<string.h>
int main()
{
	struct player
	{
		char name[20];
		int rank[3];
		int total;
	};
	struct player p[]=
	{
		"Player1",{0},0,
		"Player2",{0},0,
		"Player3",{0},0,
		"Player4",{0},0,
		"Player5",{0},0,
	};
	char winner[20];
	int i,judge,big;

	for(judge=0;judge<3;judge++)
	{
		printf("\nEnter %d judge marks: \n",judge+1);
		for(i=0;i<5;i++)
		{
			printf("%s ",p[i].name);
			scanf(" %d",&p[i].rank[judge]);
			p[i].total+=p[i].rank[judge];
		}
	}
	big=p[0].total;
	for(i=1;i<5;i++)
	{
		if(p[i].total>big)
		{
			big=p[i].total;
			strcpy(winner,p[i].name);
		}
	}
	printf("Winner: %s  Score: %d\n",winner,big);
}