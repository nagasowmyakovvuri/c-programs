#include<iostream>
using namespace std;
class A{
	public:
		int u;
		void add(int a,int b)
		{
			u=a+b;
			cout<<u<<endl;
		}
		void add(int a,int b,int c)
		{
			u=a+b+c;
			cout<<u<<endl;
		}
};
int main()
{
	A o1;
	//A o2;
	o1.add(10,20);
    o1.add(10,20,30);
	
}
