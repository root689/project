#include<iostream>

using namespace std;

char pname[100];

int main(int argv,char **argc)
{
	if(argv<2)
	{
		cout<<"cuowu"<<endl;
		return 0;
	}
	int n;
	n=*(argc[1]+8)-'0';
	//cout<<*argc[1]<<endl;
	//cout<<*(argc[1]+8)<<endl;
	cout<<"n: "<<n<<endl;
	sprintf(pname,"./photo1/%d.jpg",n);
	cout<<"pname :"<<pname<<endl;
	return 0;
}
