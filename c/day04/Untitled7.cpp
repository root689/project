#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int num[10];

void first()
{
	srand(time(NULL));
	int i;
	for(i=0;i<10;i++)
		num[i]=1+100*(rand()/(RAND_MAX+1.0));
 } 
void print()
{
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d  ",num[i]);
	}
	putchar('\n');
 } 
void paixu()
{
	
}
int main()
{
	first();
	print();
	paixu();
	print();
	return 0;
}
