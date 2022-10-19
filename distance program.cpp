/*#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;
		Distance()
		{
			
		}
		Distance(int feet,int inches)
		{
			this->feet=feet;
			this->inches=inches;
		}
		void display()
		{
			cout<<this->feet<<" "<<this->inches;
		}
};
int main()
{
	int d1,d2;
	cin>>d1>>d2;
	Distance o1(d1,d2);
	cin>>d1>>d2;
	Distance o2(d1,d2);
	Distance res;
	res.feet=o1.feet+o2.feet;
	res.inches=o1.inches+o2.inches;
	if(res.inches>=12)
	{
		res.feet=res.inches/12;
		res.inches=res.inches%12;
	}
	res.display();
	return 0;
}*/
#include<iostream>
using namespace std;
class Distance{
	
	private:
		int feet,inches;
		Distance()
		{
			
		}
		Distance(int feet,int inches)
		{
			this->feet=feet;
			this->inches=inches;
		}
		void display()
		{
			cout<<this->feet<<" "<<this->inches;
		}
};
int main()
{
	int d1,d2;
	cin>>d1>>d2;
	Distance o1(d1,d2);
	cin>>d1>>d2;
	Distance o2(d1,d2);
	Distance res;
	res.feet=o1.feet+o2.feet;
	res.inches=o1.inches+o2.inches;
	if(res.inches>=12)
	{
		res.feet=res.inches/12;
		res.inches=res.inches%12;
	}
	res.display();
	return 0;
}
