#include<iostream>
using namespace std;
class A{
	private :
	    int a=100;
	public:
		A()
		{
			
		}
	friend void fact(A);
};

void fact(A o1)
{
	cout<<o1;
}
int main()
{
	A o1;
}
