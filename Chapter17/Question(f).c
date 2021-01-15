/*Create a structure called library to hold accession number, title of the book, 
author name, price of the book, and flag indicating whether book is issued or not. 
Write a menu-driven program that implements the working of a library. The menu 
options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit*/
#include<stdio.h>
#include<stdlib.h>
int menu();
void add_book();
void display();
void disp_book_auth(int aut_ano);
void sortbyano();
int sort_function(const void *f, const void *ff);
void linkfloat();
struct library
{
	char book_title[30];
	char author_name[40];
	int accno,flag;
	float price;
};
int count=0;
struct library book[10];
int main()
{
	while(1)
	{
		switch(menu())
		{
		case 1:		//add book info
			add_book();
			break;
		case 2:		//display book info
			display();
			break;
		case 3:		//list all books of given author
			disp_book_auth(0);
			break;
		case 4:		//list the titlr of specified book
			disp_book_auth(1);
			break;
		case 5:		//list count of books in the library
			printf("Total number of books in library: %d\n",count);
			break;
		case 6:		//list the books in the order of accession number
			sortbyano();
			break;
		case 7:	
			exit(0);
		default :
			printf("Invalid choice\n");
		}
	}
}
int menu()
{
	int ch;
	printf("\n1.Add book information");
	printf("\n2.Display book information");
	printf("\n3.List all books of given author");
	printf("\n4.List the title of specified book");
	printf("\n5.List the count of books in the library");
	printf("\n6.List the books in the order of accession number");
	printf("\n7.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	return(ch);
}
void add_book()
{
	if(count==9)
	{
		printf("\nNo more spaces");
		return;
	}
	printf("\nEnter the detail of the book\n");
	printf("Title of the book: ");
	while(getchar()!='\n');
	scanf("%[^\n]s",&book[count].book_title);

	printf("Name of author: ");
	while(getchar()!='\n');
	scanf("%[^\n]s",&book[count].author_name);

	printf("Accession number of the book: ");
	scanf("%d",&book[count].accno);

	printf("Price of the book: ");
	scanf("%f",&book[count].price);

	printf("Issued or not(0/1): ");
	scanf("%d",&book[count].flag);

	if((book[count].flag!=0)&&(book[count].flag!=1))
	{
		printf("\nImproper status");
		return;
	}
	count++;
	printf("\nBook detail entered");
}
void display()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("\nTitle of the book: %s",book[i].book_title);
		printf("\nName of author: %s",book[i].author_name);
		printf("\nAccession number of the book: %d",&book[i].accno);
		printf("\nPrice of the book: ",book[i].price);
		printf("\nStatus of the book: ");
		book[i].flag==0?printf("Issued"):printf("Available\n");
	}
}
void disp_book_auth(int aut_ano)
{
	char *nm[40];
	int accno;
	int i=0,dec=0;
	//check author name is given or accession no. is given
	if(aut_ano==0)
	{
		printf("\nEnter the name of the author: ");
		scanf("%s",nm);
		printf("Detail of the books by the given author %s in the library: \n",nm);
	}
	else
	{
		printf("\nEnter the accession number of the book: ");
		scanf("%d",accno);
		printf("\nDetail of the books with accession no %d: ",accno);
	}
	for(i=0;i<count;i++)
	{
		if((strcmp(nm,book[i].author_name)==0)&&(aut_ano==0))
			dec++;
		else
		{
			if(aut_ano==1)
			{
				if(book[i].accno==accno)
					dec++;
				else 
					continue;
			}
			else
				break;
		}
		printf("\nTitle of the book: %s",book[i].book_title);
		printf("\nName of author: %s",book[i].author_name);
		printf("\nAccession number of the book: %d",&book[i].accno);
		printf("\nPrice of the book: ",book[i].price);
		printf("\nStatus of the book: ");
		book[i].flag==0?printf("Issued"):printf("Available\n");
	}
	if(dec==0)
		printf("\nNo such book");	
}
void sortbyano()
{
	qsort((struct library*)book,count,sizeof(book[0]),sort_function);
	printf("After sorting by accession number\n");
	display();
}
int sort_function(const void *f, const void *ff)
{
	return(((struct library*)f)->accno-((struct library*)ff)->accno);
}
void linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;
}