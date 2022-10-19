/*#include<iostream>
using namespace std;
class Sell{
	public:
		Sell()
		{
			cout<<"hi";
		}
	~Sell()//destructor
	{
		cout<<" hello";
	}
};
int main()
{
	Sell o1;
}*/
#include<iostream>
using namespace std;
class Sell{
	public:
		int a,b;
		Sell(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		Sell(Sell & o)
		{
			this->a=o.a;
			this->b=o.b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b<<endl;
		}
	
};
int main()
{
	Sell o1(12,13);
	Sell o2(o1);
	o1.display();
	o2.display();
	
}
