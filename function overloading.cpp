/*function overloading:
	only ::->scope resolution operator and ? operator can't overload 
	syntax:
		return type operator symbol
		{
			
		}*/
/*#include<iostream>
using namespace std;
class Time{
	public:
		int hour,minute;
		Time()//default constructor
		{
			hour=0;
			minute=0;
		}
		Time(int hh,int min)
		{
			hour=hh;
			minute=min;
		}
		Time operator +(Time &T)//operator overloading
		{
			Time t3;
			t3.hour=this->hour+T.hour;
			t3.minute=this->minute+T.minute;
			if (t3.minute>60)
			{
				t3.hour=t3.hour+1;
				t3.minute=t3.minute-60;
			}
			
			return t3;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	Time t3=t1+t2;//single  is calling parameter
	cout<<t3.hour<<":"<<t3.minute;
	return 0;
}*/
#include<iostream>
using namespace std;
class Time{
	public:
		int hour,minute;
		Time()//default constructor
		{
			hour=0;
			minute=0;
		}
		Time(int hh,int min)
		{
			hour=hh;
			minute=min;
		}
		/*Time operator +(Time &t)//operator overloading
		{
			Time t4;
			t4.hour=this->hour+t.hour;
			t4.minute=this->minute+t.minute;
		    
			return t4;
		}*/
	    void operator ++()
	    {
	    	hour++;
	    	minute++;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,15);
	/*Time t3(1,1);
    Time t4=t1+t3;
    Time t5=t2+t3;
    //Time t4=t2++;
    cout<<t4.hour<<":"<<t4.minute<<endl;
    cout<<t5.hour<<":"<<t5.minute;
    //cout<<t4.hour<<":"<<t4.minute<<endl;*/   
    ++t1;
    ++t2;
    cout<<t1.hour<<":"<<t1.minute<<endl;
    cout<<t2.hour<<":"<<t2.minute<<endl;
	return 0;
}
