#include<stdio.h>
#include<stdlib.h>
#include<time.h>


typedef struct Num{
	int num;
	struct Num *next;
}NU;

NU *blue[35];
NU *red[12];
int Blue[5];
int Red[2];

void fuweiblue()
{
	int i;

	for(i=0;i<35;i++)
	{
		blue[i]=(NU *)malloc(sizeof(NU));
		blue[i]->num=i;
		if(i!=0)
		{
			blue[i-1]->next=blue[i];
		}
	}
}
void fuweired()
{
	int i;
	for(i=0;i<12;i++)
        {
                red[i]=(NU *)malloc(sizeof(NU));
                blue[i]->num=i;
		if(i!=0)
		{
			red[i-1]->next=red[i];
		}
        }

}

void shanchublue(int x,int y)
{
	int i;
	free(blue[x]);
	blue[x-2]->next=blue[x];
	for(i=x;i<y;i++)
	{
		blue[i]=blue[i+1];
	}
}
void suijiblue()
{
	int x=35;
	int i;
	int j;
	for(i=0;i<5;i++)
	{
		j=(rand()%x+1);
		Blue[i]=blue[j]->num;
		shanchublue(j,x);
		x--;
	}
}

void shanchured(int x,int y)
{
	
	int i;
	free(red[x]);
	red[x-2]->next=red[x];
	for(i=x;i<y;i++)
	{
		red[i]=red[i+1];
	}
}
void suijired()
{
	int x=12;
	int i;
	int j;
	for(i=0;i<2;i++)
	{
		j=(rand()%x+1);
		Red[i]=red[j]->num;
		shanchured(j,x);
		x--;
	}
}

int main()
{
	srand(time(NULL));

	fuweiblue();
	fuweired();
	suijiblue();
	fuweired();
	int x=5;
	int y=2;
	int i;
	for(i=0;i<x;i++)
		printf("%d ",Blue[i]);
	for(i=0;i<y;i++)
		printf("%d ",Red[i]);

	return 0;
}

