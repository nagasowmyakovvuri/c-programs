#include<iostream>
using namespace std;
class Base{
	public:
		string name,pho;
		Base(string n,string p)
		{
			name=n;
			pho=p;
		}
		void display()
		{
			cout<<name<<" "<<pho<<endl;
		}
};
class Employee:public Base{
	public:
		string salary,age;
		Employee( string n,string p,string s,string a):Base(n,p)
		{
			salary=s;
			age=a;
		}
		 void display()
		{
			cout<<name<<" "<<pho<<" "<<salary<<" "<<age<<endl;
		}
	
};
class Student:public Base{
	public :
		string roll;
	    Student(string n,string p,string r):Base(n,p)
	    {
		    roll=r;
		
      	}
	
	   void display() 
		{
			cout<<name<<" "<<pho<<" "<<roll<<endl;
		}
};	
int main()
{
	Student o1("sow","1234","526");
	Employee o2("sow","1234","50000","19");
	o1.display();
	o2.display();
}
