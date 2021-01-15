/*An automobile company has serial number for engine parts starting from
AAO to FF9. The other characteristics of parts are year of manufacture, 
material and quantity manufactured.
(1) Create a structure to store information corresponding to a part.
(2) Write a program to retrieve information on parts with serial numbers 
between BB1 and CC6.*/
#include<stdio.h>
struct automobile
{
	int s_no;
	int year_o_manu;
	char material[20];
	int quantity;
};
struct automobile part[2];
void retrieve();
void display();
void set_auto_data();
int main()
{
	int i;
	//set the values for the records
	display();
	//retrive into on parts with serial number between BB1 & CC6
	retrive();
}
void retrive()
{
	int i,j=0;
	printf("\n List of parts between BB1 ans CC6: ");
	for(i=0;i<2;i++)
	{
		if((part[i].s_no>=0xbb1)&&(part[i].s_no<=0xcc6))
		{
			j=1;
			printf("\n\nPart number: %d",i);
			printf("\nserial number: %x",part[i].s_no);
			printf("\nYear of manufacturing: %d",part[i].year_o_manu);
			printf("\nMaterial used: %s",part[i].material);
			printf("\nManufacture quantity: %d",part[i].quantity);
		}
	}
	if(j==0)
		printf("\n No such record present\n");
}
void display()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("\nPart number: %d",i);
		printf("\nserial number: %x",part[i].s_no);
		printf("\nYear of manufacturing: %d",part[i].year_o_manu);
		printf("\nMaterial used: %s",part[i].material);
		printf("\nManufacture quantity: %d",part[i].quantity);
	}
}
void set_auto_data()
{
	int i;
	for(i=0;i<2;i++)
	{
		while(1)
		{
			printf("\nEnter the serial number of the part");
			printf("\nNumber must be between AAO and FF9: ");
			scanf("%x",&part[i].s_no);
			if(part[i].s_no>=0xAA0&&part[i].s_no<=0xff9)
				break;
		}
		printf("\nEnter the year of manufacturing of the part: ");
		scanf("%d",&part[i].year_o_manu);
		printf("\nEnter the material of the part: ");
		while(getchar()!='\n');
		scanf("%s",&part[i].material);
		printf("\nEnter the quantity of the part: ");
		scanf("%d",&part[i].quantity);
	}
}