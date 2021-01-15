/*There are three pegs labeled A, B and C. Four disks are 
placed on peg A. The bottom-most disk is largest, and disks go on 
decreasing in size with the topmost disk being smallest. The objective 
of the game is to move the disks from peg A to peg C, using peg B as an 
auxiliary peg. The rules of the game are as follows:
(1) Only one disk may be moved at a time, and it must be the top disk 
on one of the pegs.
(2) A larger disk should never be placed on the top of a smaller disk.
Write a program to print out the sequence in which the disks should be
moved such that all disks on peg A are finally transferred to peg C. */
#include<stdio.h>
void move(int, char, char, char);
int main()
{
	int n=4;
	move(n,'A','B','C');
}
void move(int n, char a, char b, char c)
{
	if(n==1)
		printf("Move from %c to %c \n",a,c);
	else
	{
		move(n-1,a,c,b);
		move(1,a,b,c);
		move(n-1,b,a,c);
	}
}