/*#include<iostream>
using namespace std;
class Sell{
    public:
    Sell()
    {
        B oj1(1,2);
        oj1.display();
    }
    private:
    class B{
        public:
             int a,d;
        B(int a,int d)
    {
      this->a=a;
      this->d=d;
    }
  
  void display()
  {
      cout<<this->a<<" "<<this->d<<" ";
  }
    };
};
int main()
{
    Sell o1;
    //o1.fun(10,20);
    //o1.fun(10,20);
    
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class Sell{
  int a,b;
  void fun(int a,int b)
  {
      this->a=a;
      this->b=b;
  }
  void display()
  {
      cout<<this->a<<" "<<this->b<<" ";
  }
};
int main()
{
    Sell o1;
    o1.fun(10,20);
    o1.display();
    return 0;
}*/
#include<iostream>
using namespace std;
class Sell{
	public:
		friend class c;
	private:
		class B{
			public:
				int a,b;
				B(int a,int b){
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
class c
{
	public:
		C()
		{
	    Sell::B oj1(12,29);
	    oj1.display();
        }
};
int main()
{
	Sell o1;
	
}
