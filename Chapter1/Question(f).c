/*Paper of size A0 has dimensions 1189 mm x 841 mm.
Each subsequent size A(n) is defined as A(n-1) cut in half parallel to
its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm.
Write a program to calculate and print paper sizes A0, A1, A2, ... A8.*/
#include<stdio.h>
int main()
{
	int hta[8]={},wda[8]={},i;
	hta[0]=1189;
	wda[0]=841;
	printf("Size of A0 paper Height =%dmm\tWidth = %dmm\n",hta[0],wda[0]);
	for(int i=1;i<=8;i++)
	{
		hta[i]=wda[i-1];
		wda[i]=hta[i-1]/2;
		printf("Size of A%d paper Height =%dmm\tWidth = %dmm\n",i,hta[i],wda[i]);
	}
}