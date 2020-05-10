#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int num[10];

void first()
{
	srand(time(0));
	int i=0;
	for(i=0;i<10;i++)
	{
		num[i]=1+100*(rand()/(RAND_MAX+1.0));
	}
}
void paixu()
{
	int i=1;
	int t,j;
	for(i=1;i<10;i++)
		for(j=0;j<(10-i);j++)
		if(num[j]<num[j+1])
		{
			t=num[j];
			num[j]=num[j+1];
			num[j+1]=t;
		}
}
void print()
{
	int i;
	for(i=0;i<10;i++)
		printf("%d  ",num[i]);
	putchar('\n');
}
int main()
{
	first();
	print();
	paixu();
	print();
	return 0;
 } 
