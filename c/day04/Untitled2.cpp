#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int num[11];

void first()
{
	srand(time(NULL));
	int i;
	for(i=1;i<11;i++)
		num[i]=1+100*(rand()/(RAND_MAX+1.0));
 } 
void print()
{
	int i=1;
	for(i=1;i<11;i++)
	{
		printf("%d  ",num[i]);
	}
	putchar('\n');
 } 
void paixu()
{
	int i,j;
	for(i=2;i<11;i++)
	{
		num[0]=num[i];
		j=i-1;
		while(num[0]<num[j])
		{
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=num[0];
	}
}
int main()
{
	first();
	print();
	paixu();
	print();
	return 0;
}
