#include<iostream>
using namespace std;
class Personal{
	static string name,pho;
	public:
		//static int  k;
	
		Personal(){
		}
	/*	Personal(string n,string p)
		{
			name=n;
			pho=p;
		}*/
		void display()
		{
			cout<<name<<" "<<pho<<endl;
		}
	friend void Sold(Personal);
};
void Sold(Personal o1)
{
	cout<<o1.name<<" "<<o1.pho<<endl;
}
//int Personal::k=10;
class Student:public Personal{
	public:
		string roll,branch;
		Student(string n,string p,string r,string b)
		{
			roll=r;
			branch=b;
		}
		void display()
		{
			cout<<roll<<" "<<branch<<endl;
			//Personal::display();//to display the super class function
		}
		
};
int main()
{
	Student s1("sowmya","97044269444","212","cse");
	s1.display();

}
