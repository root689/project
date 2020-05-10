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
	int t;
	int i,j,m,n;
	for(i=2;i<11;i++)
	{
		num[0]=num[i];
		n=1,j=i-1;
		while(n<=j)
		{
			m=(j+n)/2;
			if(num[0]<num[m])
				j=m-1;
			else
				n=m+1;
		}
		for(t=i-1;t>=(j+1);--t)
			num[t+1]=num[t];
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
