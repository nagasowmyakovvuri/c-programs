#include<iostream>
#include<cmath>
using namespace std;
class Quadratic{
	public:
		int a,b,c,d;
		float r1,r2;
		Quadratic(int a,int b,int c)
		{
			this->a =a;
			this->b=b;
			this->c=c;
		}
		void caldis()
		{
			this->d=(b*b)-4*a*c;
		}
		void rootscal()
		{   if (this->d>0)
		  { 
			this->r1=(-b+sqrt(this->d))/2*a;
			this->r2=(-b-sqrt(this->d))/2*a;
			cout<<" roots are real and distinct"<<"  "<<this->r1<<"  "<<this->r2;
	      }
	      else if(this->d==0)
	      {
	      	this->r1=-b/(2*a);
	      	this->r2=this->r1;
	      	cout<<" roots are real and equal"<<"  "<<this->r1<<"  "<<this->r2;
		  }
		  else
		  {
		  	cout<<" imagenery roots";
		  }
		}
};
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   Quadratic o1(a,b,c);
   o1.caldis();
   o1.rootscal();
   return 0;	
}
