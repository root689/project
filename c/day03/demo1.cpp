#include<iostream>

using namespace std;

char pname[100];

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		sprintf(pname,"photo/%d.jpg",i);
		cout<<i<<"   "<<pname<<endl;
	}
	return 0;
}
