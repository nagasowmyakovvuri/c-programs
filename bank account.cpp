/*#include<iostream>
using namespace std;
class Bank_acc{
	int pin;
	public:
     	string name,ifsc,branch,bank_name;
     	long long acc_no,card_no;
	Bank_acc(string name,string ifsc,string branch,string bank_name,int acc_no,int card_no,int pin)
	{
	    	this->name=name;
	    	this->ifsc=ifsc;
	    	this->branch=branch;
	        this->bank_name=bank_name;
	        this->acc_no=acc_no;
	        this->card_no=card_no;
	        this->pin=pin;
		}
	void display()
	{
	      cout<<name<<endl;
	      cout<<ifsc<<endl;
	      cout<<branch<<endl;
	      cout<<bank_name<<endl;
	      cout<<acc_no<<endl;
	      cout<<card_no<<endl;
	      cout<<pin<<endl;
		}
};
int main()
{
	Bank_acc person1("sowmya","sbi004","anaparthi","sbi",12345,21347,04042004);
	person1.display();
}*/
#include<iostream>
using namespace std;
class Bank_acc{
	int pin;
	public:
     	string name,ifsc,branch,bank_name;
     	long long acc_no,card_no,balance,k;
	Bank_acc(string name,string ifsc,string branch,string bank_name,int acc_no,int card_no,int pin,int balance)
	{
	    	this->name=name;
	    	this->ifsc=ifsc;
	    	this->branch=branch;
	        this->bank_name=bank_name;
	        this->acc_no=acc_no;
	        this->card_no=card_no;
	        this->pin=pin;
	        this->balance=balance;
		}
	int get_pin()
	{
		return pin;
	}
	void display()
	{
		cout<<balance;
	}
	void depositamount(int k)
	{
		balance+=k;
	}
	void withdrawamount(int k)
	{
		if (balance-k>=2000)
		{
			balance-=k;
		}
		else
		{
			cout<<"lack of money";
		}
	}
	void pinchange(int newpin)
	{
		if (newpin==pin)
			{
				cout<<"try another";
			}
			else
			{
				pin=newpin;
			}
}
	void veiwdetails()
	{
	      cout<<name<<endl;
	      cout<<ifsc<<endl;
	      cout<<branch<<endl;
	      cout<<bank_name<<endl;
	      cout<<acc_no<<endl;
	      cout<<card_no<<endl;
	      cout<<pin<<endl;
	       cout<<balance<<endl;
		}
};
int main()
{
	Bank_acc person1("sowmya","sbi004","anaparthi","sbi",12345,21347,04042004,30000);
	int pin;
	cout<<"enter pin";
	cin>>pin;
	if(pin=person1.get_pin())
	{
	while(1)
	{
		cout<<"1.view amount 2.deposit amount 3.with draw amount 4.pin change 5.veiw details 6.exit"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)
		{
			person1.display();
		}
		else if(ch==2)
		{
			int k;
			cin>>k;
			person1.depositamount(k);
		}
		else if(ch==3)
		{
			int k;
			cin>>k;
			person1.withdrawamount(k);
		}
		else if(ch==4)
		{
			int newpin;
			cin>>newpin;
				
			person1.pinchange(newpin);
		
		}
		else if(ch==5)
		{
			person1.veiwdetails();
		}
		else
		{
			break;
		}
	}
}
}
