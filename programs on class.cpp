#include<iostream>
using namespace std;
class Student{
	/*public:
		int roll_no=526;*/
	/*private:
		int roll_no=526;*/
	public:
		int roll_no;
		float per;
		string name;
		string  branch;
	void get_data(string,string,float,int);
	void put_data();
};
void Student::get_data(string b,string n,float p,int r)
{
		roll_no=r;
		name=n;
		per=p;
		branch=b;
}
void Student::put_data()
{
		cout<<roll_no<<" "<<name<<" "<<per<<" "<<branch;
		cout<<endl;
}

int main()
{
    Student std1,std2;
    int r,r1;
    float p,p1;
    string b,b1,n,n1;
    cin>>b;
    cin>>n;
    cin>>p;
    cin>>r;
    cin>>b1;
    cin>>n1;
    cin>>p1;
    cin>>r1;
    std1.get_data(b,n,p,r);
    std2.get_data(b1,n1,p1,r1);
    std1.put_data();
    std2.put_data();
    
	return 0;
}
/*
cse
hi
90.2
213
ece
sowmya
213
523*/
