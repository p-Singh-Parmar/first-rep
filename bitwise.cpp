#include<iostream>
using namespace std;
int main()
{
    unsigned int a = 16;
    unsigned int b = 13;
    int c=0;

    c = a&b;
    cout<<"a&b = "<<c<<endl;

    c = a|b;
    cout<<"a|b = "<<c<<endl;
    
    c = a^b;
    cout<<"a^b = "<<c<<endl;
    
    c = ~a;
    cout<<"~a = "<<c<<endl;

    c = a<<2;
    cout<<"a<<2 = "<<c<<endl;

    c = a>>2;
    cout<<"a>>2 = "<<c<<endl;
    
    c = ~a;
    // (num+1)*-1
    cout<<c;

    return 0;
}
