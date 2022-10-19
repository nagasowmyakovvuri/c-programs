#include<iostream>
using namespace std;
class Fun
{
	int c;//the variables or functions which are common to all objects are called static or class variables /methods
	private:
		int a=10;//instance variables -->which changes from object to object
	    int b=20;//
		void fun()//private instance method
		{
			cout<<" hello";
		}
	public:
		void fun1()///public instance method
		{
			fun();//we can acess private members and methods using public methods
		}


};
int main()
{
	Fun obj;
	//obj.fun();//since fun is a private method cannot acess out of class
	obj.fun1();//since fun1 is a public method can acess out of class
	return 0;
}
