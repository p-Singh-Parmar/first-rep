#include<iostream>
using namespace std;

class interest
{
	private:
		float p_amount;
		float interest;
		float period;
		float t_amount;
		float rate;
		
	public:
		
		void in()
		{
			cout<<"enter the amount:";
			cin>>p_amount;
			cout<<"\nenter rate:";
			cin>>rate;
			cout<<"\nenter time:";
			cin>>period;
			interest= (p_amount*rate*period)/100;
			t_amount = p_amount+interest;		
		}
		void show()
		{
			cout<<"\nInterest is:"<<interest;
			cout<<"\nAmount is:"<<t_amount;
		}
};
int main()
{
	interest I;
	I.in();
	I.show();
	
}

