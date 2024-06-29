#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<cctype>
#define MAX_VALUE 100
int menu()
{
    int choice;

	printf("\n 1- Adding a item: ");
	printf("\n 2- Print out items which belong to a known category: ");
	printf("\n 3- Remove an item based on a code inputted: ");
	printf("\n 4- Print the list in ascending order based on categories then names: ");
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
	fflush(stdin);
	return choice;
}
int isFull(int *pn)
{
    return *pn == MAX_VALUE;
}
int isEmpty(int *pn)
{
    return *pn == 0;
}
char* lTrim(char s[])
{
    int i = 0;
	while (s[i] == ' ')i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
char* rTrim(char s[])
{
    int i = strlen(s)-1;
	while (s[i] == ' ') i--;s[i+1] = '\0';
	return s;
}
char* trim(char s[])
{
    rTrim(lTrim(s));
	char *ptr = strstr(s, " ");
	while (ptr != NULL)
	{
	    strcpy(ptr, ptr+1);ptr = strstr(s, " ");
	}
	return s;
}
char* nameStr (char s[])
{
    trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i = 0; i < L; i++)
	if (i == 0 || (i > 0 && s[i-1] == ' '))s[i] = toupper(s[i]);
	return s;
}
void addItem(char code[][9], char name[][21], int prices[], int categories[], int*pn)
{ 
    char codes[9], names[21];
	int price, category;
	printf("\nPlease Enter Item Information\n");
	fflush(stdin);
	printf("Item Code: ");
	scanf("%[^\n]", codes);
	fflush(stdin);
	printf("Item Name: ");
	scanf("%[^\n]", names);
	printf("Item Price: ");
	scanf("%d", &price);
	printf("Item Category: ");
	scanf("%d", &category);
	trim(codes);
	nameStr(names);
	strcpy(code[*pn], codes);
	strcpy(name[*pn], names);
	prices[*pn] = price;
	categories[*pn] = category;(*pn)++;
}
void printList(char code[][9], char name[][21], int prices[], int categories[], int n)
{
    printf("Code: %s\n", code[n]);
	printf("Name: %s\n", name[n]);
	printf("Price: %d \n", prices[n]);
	printf("Category: %d \n", categories[n]);
}
void printBasedName(char code[][9], char name[][21], int prices[], int categories[], int n)
{
    char names[21];
	printf("\nEnter NAME of item you wanna find the information: ");
	scanf("%[^\n]", names);
	nameStr(names);
	int check, i;
	check = 0;
	for (i = 0; i < n; i++)
	{
	    if (strcmp(names, name[i]) == 0)
	    {
		    printf("\n Information of Item \n");
			printList(code, name, prices, categories, i);
			check = 1;
		}
	}
	if (check == 0)printf("\nNot found information of item was entered!\n");
}
void removeItem(char code[][9], char name[][21], int prices[], int categories[], int*pn)
{
    int i;
	char codes[9];
	printf("Enter CODE of item you wanna REMOVE: ");
	scanf("%[^\n]", codes);
	trim(codes);
	int check = 0;
	for (i = 0; i < *pn; i++)
	{
	    if (strcmp(code[i], codes) == 0)
		{
		    int j;
			for (j = i + 1; j < *pn; j++)
			{
			    strcpy(code[j-1], code[j]);
				strcpy(name[j-1], name[j]);
				prices[j-1] = prices[j];
				categories[j-1] = categories[j];
			}
			check = 1;
			(*pn)--;
		}
	}
	if (check == 1) printf("\nRemoved!\n");
	else
	printf("\nUnremove!\n");
}
void printDec(char code[MAX_VALUE][9], char name[][21], int prices[], int categories[], int*pn)
{
    int i, j;
	for (i = 0; i < *pn-1; i++)
	for (j = *pn-1; j > i; j--)
	{
	    if ((prices[j] + categories[j]) > (prices[j-1] + categories[j-1]))
		{
		    char trscode[9];
			strcpy(trscode, code[j]);
			strcpy(code[j], code[j-1]);
			strcpy(code[j-1], trscode);
			char trsname[21];
			strcpy(trsname, name[j]);
			strcpy(name[j], name[j-1]);
			strcpy(name[j-1], trsname);
			int trssa;trssa = prices[j];
			prices[j] = prices[j-1];
			prices[j-1] = trssa;
			int trsall;
			trsall = categories[j];
			categories[j] = categories[j-1];
			categories[j-1] = trsall;
		}
	}
	printf("\nList of items\n");
	for (i = 0; i < *pn; i++)
	{
	    printList(code, name, prices, categories, i);
		printf("\n");
	}
}
int main()
{
    int userChoice, check = 1;
	char code[MAX_VALUE][9];
	char name[MAX_VALUE][21];
	int prices[MAX_VALUE];
	int categories[MAX_VALUE];
	int n = 0;
	do
	{
	    userChoice = menu();
		switch(userChoice)
		{
		    case 1:if (isFull(&n)) printf("\nSorry! The List is full!\n");
			else
			addItem(code, name, prices, categories, &n);
			printf("\nAdded!\n");
			break;
			case 2:if (isEmpty(&n)) printf("\nSorry! The List is empty!\n");
			else
			printBasedName(code, name, prices, categories, n);
			break;
			case 3:if (isEmpty(&n)) printf("\nSorry! The List is empty!\n");
			else
			removeItem(code, name, prices, categories, &n);
			break;
			case 4:if (isEmpty(&n)) printf("\nSorry! The List is empty!\n");
			else
			printDec(code, name, prices, categories, &n);
			break;

		}
	}
	while (check == 1);
	printf("\nGood Bye!");
	getch();
}