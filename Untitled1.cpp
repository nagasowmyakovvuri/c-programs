#include<iostream>
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
int main()
{
	Base o1("sow","1234");
	o1.display();
}
