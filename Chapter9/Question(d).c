/* Given three variables x, y, z write a function to circularly 
shift their values to right. In other words if x=5, y=8, z=10 
after circular shift y=5, z=8, x=10. Call the function 
with variables a, b, c to circularly shift values.*/
#include<stdio.h>
void swap(int*,int*,int*);
int main()
{
	int x,y,z;
	printf("Enter values of x,y,z: ");
	scanf("%d%d%d",&x,&y,&z);
	swap(&x,&y,&z);
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
}
void swap(int*x,int*y,int*z)
{
	int w;
	w=*x;
	*x=*y;
	*y=*z;
	*z=w;
}