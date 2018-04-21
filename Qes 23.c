#include<stdio.h>
#include<conio.h>
struct item
{
	char s;
	int n;
	int g;
}i[10];
main()
{
	int j;
	for(j=0;j<10;j++)
	{
	i[j].s='s';
	i[j].n=j+1;
	}
	printf("***Ramdon arrangement of gifts taken by students***\n");
	for(j=0;j<10;j++)
	{
	printf("\nEnter the number of gifts taken by Student %c%d  : ",i[j].s,i[j].n,"\n\n");
	scanf("%d",&i[j].g);
	}
