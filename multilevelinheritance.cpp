#include<iostream>
using namespace std;
class Landline{
	public:
		Landline()
		{
			cout<<"Call"<<endl;
		}
};
class Mobile:public Landline{
	public:
		Mobile()
		{
			cout<<"games,messages"<<endl;
		}
};
class smartmobile :public Mobile{
	public:
		smartmobile()
		{
			cout<<"vediocalls ,facebook"<<endl;
		}
};

int main()
{
	smartmobile o1;
	return 0;
}
