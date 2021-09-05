#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string s;
    s="aaabccddd";
    int i=0;
    while(i<s.length()){
        if(s[i]==s[i+1])
    {
        s.erase(s[i],s[i+2]);
    }
    else {
    i++;
    }
    }
    cout<<s;
    return 0;
}