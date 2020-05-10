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
	int i,j,k;
	int n;
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i;j<10;j++)
		{
			if(num[j]<num[k])
			{
				k=j;
				//printf("%d\n",k);
			}
				
		}
		
		if(k!=i)
		{
			n=num[i];
			num[i]=num[k];
			num[k]=n;
		}
	
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
