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
	int i=0;
	for(i=0;i<11;i++)
	{
		printf("%d  ",num[i]);
	}
	putchar('\n');
 } 
void paixu()
{
	int i,j,d;
	int n=10;
	d=n/2;
	while(d>=1) 
	{
		for(i=d+1;i<=n;++i)
		{
			num[0]=num[i];
			j=i-d;
			while((j>0)&&(num[0]<num[j]))
			{
				num[j+d]=num[j];
				j=j-d;
			}
			num[j+d]=num[0];
		}
		d=d/2;
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
