#include <iostream>
using namespace std;
class Sell{
	private:
		int a=12;
	protected:
		int b=90;
	public:
		int fun()
		{
			return a;
		}
};
int main()
{
	Sell o1;
	//cout<<o1.a<<o2.b;//since a is a private can't access,and bis a protected can't access
	cout<<o1.fun();
}
