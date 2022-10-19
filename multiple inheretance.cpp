#include<iostream>
using namespace std;
class Student{
	public:
		int a;
		string roll,branch;
		Student(string r,string b)
		{
			 a=2;
			roll=r;
			branch=b;
		}
		void display()
		{
			cout<<roll<<endl;
		}
};
class Sportsperson{
	public:
		int a;
		string game;
		int medal_count;
		Sportsperson(string g,int m)
		{
			a=90;	
			game=g;
			medal_count=m;
		}
		void display()
		{
			cout<<game<<endl;
		}
};
class Person:public Sportsperson,public Student{
    public:
    	
    	string name;
    	Person(string n,string g,int m,string r,string b):
		Sportsperson(g,m),Student(r,b)
    	{
    
    		name=n;
    		
		}
		/*void display()
		{
			cout<<name<<" "<<game<<" "<<medal_count<<" "<<roll<<" "<<branch<<endl;
		}*/
};
int main()
{
	Person p1("Sowmya","kabaddi",5,"526","cse");
    //cout<<p1.Sportsperson::a ;
    //cout<<p1.Student::a ;
	//p1.Sportsperson::display();
		p1.Student::display();
}
/*
base1                         base2

           child class

*/
