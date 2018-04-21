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
	int k,temp;
	for(k=0;k<9;k++)
	for(j=0;j<9-k;j++)
	{
		if(i[j].g<i[j+1].g)
		{
			temp=i[j].g;
			i[j].g=i[j+1].g;
			i[j+1].g=temp;
		}
	}
	printf("\n Order of billed students according to highest priority\n");
	for(j=0;j<10;j++)
	{
		printf("\n Student : %c%d      %d",i[j].s,i[j].n,i[j].g);
	}
	
}
