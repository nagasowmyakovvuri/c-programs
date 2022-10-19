#include <iostream>
using namespace std;
inline void fun(int a)//request method -->used for small functions,more faster than function call,can't used for returnig and loopinng ,switch cases
{
	cout<<a;
}
int main()
{
	int a;
	cin>>a;
	fun(a);
	return 0;
}
