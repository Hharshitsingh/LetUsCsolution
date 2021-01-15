/*The Distance between two cities (in km) is input throughthe keyboard.
 Write a program to convert and print this distance in meters, feet, inches
 and centimeters.*/
 #include<stdio.h>
 int main()
 {
 	float km;
 	printf("Enter Distance between two cities in Kilometers: ");
 	scanf("%f",&km);
 	printf("Distance in meters: %.3f\n",km*1000);
 	printf("Distance in feet: %.3f\n",km*3280.8);
 	printf("Distance in inches:%.3f\n",km*39370.078);
 	printf("Distance in centimeters: %.3f\n",km*100000);
 } 