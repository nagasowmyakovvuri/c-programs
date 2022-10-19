#include<iostream>
using namespace std;
class Student{
	public:
		int Roll_no;
		float per;
		string name;
		string branch;
		Student(int r,string n,float p,string b)
		{
			Roll_no=r;
			per=p;
			name=n;
			branch=b;
		}
	void put_data();
		
};
void Student::put_data()
{
	cout<<Roll_no<<" "<<name<<" "<<branch<<" "<<per<<endl;
}
int main()
{
	int r;
	float p;
	string n;
	string b;
	cin>>r;
	cin>>n;
	cin>>p;
	cin>>b;
	Student std1(r,n,p,b);
	cin>>r;
	cin>>n;
	cin>>p;
	cin>>b;
	Student std2(r,n,p,b);
	std1.put_data();
	std2.put_data();
	void put_data();
	return 0;
	
}
