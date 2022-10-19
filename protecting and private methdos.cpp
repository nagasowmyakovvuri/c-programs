/*#include <iostream>
using namespace std;
class Sell{
	private:
		int a=12;
	protected:
		int b=90;
	public:
		/*int fun()
		{
			return a;
		}*/
		//friend void fun(Sell);
//friend is a keyword used for acessing the private or protected variables outside the class by constructing the friend method
//};
/*void fun(Sell o1)//friend method :syntax-->void function name(class name object name)
{
	cout<<o1.a;
}
int main()
{
	Sell o1;
	fun(o1);
	//cout<<o1.a<<o2.b;//since a is a private can't access,and bis a protected can't access
	//cout<<o1.fun();//we can use public methods for accessing the private variables
}*/
#  include<iostream>
using namespace std;
class Sell{
	private :
		int a=12;
	protected:
		int b=90;
	public:
		friend class B;
};
class B{//we can acess the private or protected variables outside the class with a friend class  
	public:
		void fun(Sell o1)
		{
			cout<<o1.a<<" "<<o1.b;
		}
};
int main()
{
	Sell o1;
	B o2;
	o2.fun(o1);
}
