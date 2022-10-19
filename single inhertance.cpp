#include<iostream>
using namespace std;
class Personal{//parent class 

	public:
	//protected:
		string name, pho;
		/*Personal()
		{
			//cout<<"personal class"<<endl;
		
		}
	   	void display()
		{
			cout<<"display in parent class";
		 //cout<<rollno<<" "<<branch<<" "<<name<<" "<<pho;	
		}*/
		
};
class student:public Personal{//class mode is inherted in a public mode
	public://student class
		string rollno,branch;
		student(string n,string p,string r,string b)
		{
			
			//cout<<"stduent class";
			rollno=r;
			branch=b;
			name=n;
			pho=p;
			
		}
	   	void display()
		{
			cout<<"display in student class";
		 //cout<<rollno<<" "<<branch<<" "<<name<<" "<<pho;	
		}
};
int main()
{
	student s1("sowmya","9704269444","526","cse");
	s1.display();
	//cout<<s1.rollno<<" "<<s1.branch<<" "<<s1.name<<" "<<s1.pho;//we can't aceess the protected varialbles outsside the class
}
