#include <bits/stdc++.h>
using namespace std;

//Map is a n associative array
int main(){
    map<string,int > marks;
    marks["psp"]=98;
    marks["ktk"]=89;
    marks["abhig"]=90;
    marks.insert({{"arya",73}, {"krish",79}});
    map<string,int> :: iterator iter;
    for(iter=marks.begin(); iter!=marks.end(); ++iter)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}