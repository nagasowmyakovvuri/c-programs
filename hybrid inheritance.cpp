#include<iostream>
using namespace std;
class A{
	public:
	A()
	{
		cout<<"A class"<<endl;
	}
	void display()
	{
		cout<<"hi"<<endl;
	}
};
class B: virtual public A{
	public:
	B()
	{
		cout<<"B class"<<endl;
	}
};

class D: virtual public A{
	public:
	D()
	{
		cout<<"D class"<<endl;
	}
	
};
class C:public B,public D{
	public:
	C()
	{
		cout<<"C class"<<endl;
	}
	
};
/*class E:public D{
	public:
	E()
	{
		cout<<"E class"<<endl;
	}
	
};*/
int main()
{
	//E o1;
	C o2;
	o2.display();//ambiguos error as A is parent class for two classes. to overcome we use virtual keyword
}
/*
                      A
                      
            B                   D
            
            c                   E
*/
