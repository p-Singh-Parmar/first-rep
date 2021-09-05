#include<iostream>
#include<string>
using namespace std;

class constr
{
	public:
		string name;
		float price;
	
	constr()
	{
		cout<<"name:"<<name<<endl;
		cout<<"price:"<<price<<endl;
		
		}
	constr(string lname, float lprice)
	{
		name= lname;
		price=lprice;
		cout<<"name:"<<name<<endl;
		cout<<"price:"<<price<<endl;
	
	}
	
	constr( const constr &p)
	{
		name= p.name;
		price=p.price+100;
		cout<<"name:"<<name<<endl;
		cout<<"price:"<<price<<endl;
	}
	~constr()
	{
		cout<<"destructing:"<<price<<endl;
	}
};

int main()
{
	constr l;
	constr m("Galaxy", 100);
	constr p=m;
	return 0;
}
