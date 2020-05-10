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
void paixu(int num[],int n,int m)
{
	int a;
	if(n>m)
		return ;
	int i=n;
	int j=m;
	while(n<m)
	{
		while(n<m)
		{
			if(num[n]<num[m])
				n++;
			else
			{
				a=num[n];
				num[n]=num[m];
				num[m]=a;
				m--;
				break;	
			}
		}
		while(n<m)
		{
			if(num[n]<num[m])
				m--;
			else
			{
				a=num[n];
				num[n]=num[m];
				num[m]=a;
				n++;
				break;
			}
		}
		paixu(num,i,m-1);
		paixu(num,m+1,j);
	}
	
}
int main()
{
	first();
	print();
	paixu(num,1,10);
	print();
	return 0;
}
