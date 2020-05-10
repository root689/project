#include<iostream>

using namespace std;

class A{
	public:
		static int a;
	A()
	{
		//int a=10;
	}
		
};
 
static int a=10; 
int main()
{
	A b;
	cout<<b.a<<endl;
	return 0; 
}

