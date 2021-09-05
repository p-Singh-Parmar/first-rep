#include<iostream>
#include<string.h>
using namespace std;
class test
{
	char s[100];
	public:
		void read()
		{
			cout<<"enter string:\n";
			cin>>s;
			
		}
		void show()
		{
			cout<<"string="<<s<<endl;
		}
		
		test operator +(test t)
		{
			test t3;
			Strcpy(t3.s,s);
			Strcat(t3.s," ")
			Strcat(t3.s,t.s);
			return t3;
			
		}
};

int main()
{
	test t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	cout<<"\nnew string is:";
	t3.show();
	return 0;	
}
