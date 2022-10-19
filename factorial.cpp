#include<iostream>
using namespace std;
long long static int i=1;
class Factorial{
	public:
		long long int a,k=1;
		Factorial(int a)
		{
			this->a=a;
		}
	    recursion()
		{
			if(i>a)
			{
				return 1;
			}
			else
			{
				k=i*k;
				i++;
				return recursion();
			}
		}
		void display()
		{
			cout<<k;
		}
};
int main()
{
	long long int a;
	cin>>a;
	Factorial o1(a);
	o1.recursion();
	o1.display();
}
