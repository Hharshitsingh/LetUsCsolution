/*Write a program to receive values of latitude (L1, L2) and
longitude (G1, G2), in degrees, of two places on the earth and
output the distance (D) between them in nautical miles. 
The formula for distance in nautical miles is:
D = 3963 cos^-1(sin L1 sin L2 + cos L1 cos L2 * cos ( G2- G1 ))*/
#include<stdio.h>
#include<math.h>
int main()
{
	float L1,L2,G1,G2,D;
	printf("Enter Latitude and Longitude of Place 1: ");
	scanf("%f%f",&L1,&G1);
	printf("Enter Latitude and Longitude of Place 1: ");
	scanf("%f%f",&L2,&G2);
	L1 = L1*3.14/180;		//covert angle to radians
	L2 = L2*3.14/180;
	G1 = G1*3.14/180;
	G2 = G2*3.14/180;
	D = 3963*acos(sin(L1)*sin(L2) + cos(L1)*cos(L2) * cos(G2-G1));
	printf("Distance between Place1 and Place2: %.2f\n",D);
}