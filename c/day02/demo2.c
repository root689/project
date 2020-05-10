#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i=0;
	sprintf(name,"./%d.jpg",i);
	if(unlink(name)==0)
		printf("OK");
	return 0;
}
