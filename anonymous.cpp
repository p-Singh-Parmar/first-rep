#include <bits/stdc++.h>
//#include <cmath>
using namespace std;

void solve()
{
    vector<int> vec= {12,34,4,578,5,44,3,2};
    int p = vec[0];
    int i,c,d;
    vector<int> pushing;
    for( i=0; i<(vec.size()/2); i++)
    {
        if(vec[i]>p)
        {
            p=vec[i];
            c=i;
        }
    }
    pushing.push_back(c);
    p=vec[i];
    for( ; i<vec.size(); i++)
    {
        if(vec[i]>p)
        {
            p=vec[i];
            c=i;
        }
    }
    pushing.push_back(c);

    for(auto x:pushing)
    {
        cout<<x<<" ";
    }
}

void getPairsCount() {
        // code here
        int n=6;
        int a[n]={1,2,3,4,5,6}; int k=7;
        int i,j,c=0;
        for(i=0; i<n;i++)
        {
            for(j=i+1; j<n;j++)
            {
                if(a[i]+a[j]==k)
                    c++;
            }
        }
        cout<<c;
    }

    void single(){
        int n =7; int a[n]={7,3,5,4,4,3,5};
        unordered_map<int, int> m;
        for(int i=0; i<n; i++)
        {
            m[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(m[a[i]]==1)
            {
                cout<<a[i];
            }
        }
    }

    void distict_yearsString()
    {
        string str="prakhar was born on 18-03-2000. On 30-10-2015, he'll fall in love.";
        set<string> uniqueDates;
        string s="";

        for(int i=0; i<str.length(); i++)
        {
            if(isdigit(str[i])){
                s.push_back(str[i]);
            }
            if(str[i]== '-'){
                s.clear();
            }

            if(s.length()==4)
            {
                uniqueDates.insert(s);
                s.clear();
            }
        }
        int c=uniqueDates.size();
        cout<<c<<endl;
    }

    void missing()
    {
        int n=4,k=5,c=0;
        int a[n]={2,4,10,7};
        unordered_set<int> missing;
        for(int i=0; i<n; i++)
        {
            missing.insert(a[i]);
        }

        int maxm = *max_element(a, a+n);
        int minm = *min_element(a, a+n);

        for(int i=minm; i<maxm; i++)
        {
            if(missing.find(i) == missing.end())  //if not find returns missing.end()
                c++;

            if(c==k)
                cout<<i;
        }
    } 

    void arrCount(){
        int n1=6,n2=5,n3=8, n4=n1+n2+n3;
        int a[n1]=  {1, 5, 10, 20, 40, 80};
        int b[n2]=  {6, 7, 20, 80, 100};
        int c[n3]= {3, 4, 15, 20, 30, 70, 80, 120};
        
        int d[n4];
        merge(a,(a+n1), b,(b+n2),d);
        merge(c,(c+n3),d,(d+n4),d);
        
        set<int> s;

        int last = *max_element(d, (d+n1+n2+n3));
        for(int i=1; i<last; i++)
        {
            if(d[i-1]==d[i] && d[i]==d[i+1])
            {
                s.insert(d[i]);
            }
        }

        for( int x:s)
        {
            cout<<x<<" ";
        }
    }

    void product(){
        int n=5;     int a[n]={1,2,17,3,3}; float sq=1;
        unordered_map<int, int> pro;
        for(int i=0; i<n; i++)
        {
            pro[a[i]]++;
        }

        for( int i=0; i<n; i++)
        {
            sq=sq*a[i];
        }

        float rt = sqrt(sq);    int wh=rt;

        if( rt-wh==0 && pro[rt]==1)
            cout<<"YES"<<rt<<" "<<sq;
        else{
            cout<<"NO"<<rt;
        }
    }

    
    void rightside(){
        int n=6; int a[n]={10,5,11,10,20,12};
        unordered_map<int, int> m;
        int flag;
        for(int i=0; i<n-1; i++)
        {
            
            int min=*max_element(a, a+n);
            for(int j=i+1; j<n; j++)
            {
                flag=0;
                if(a[j]==a[i]){
                    min=a[j];
                    break;
                    }
                else if(a[j]<min && a[j]>a[i])
                {
                    min=a[j];
                }
                else
                    flag=-1;
            }
            if(flag==-1)
                cout<<"-1"<<endl;
            else
                cout<<min<<endl;
        }
        //for(auto x:m){
            //cout<<x.first<<" ";
        }

void subarrSum(){
    int n=7; int a[n]={1,4,-2,-2,5,-4,3};
    unordered_set<int> s;
    int sum=0,flag=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
        cout<<sum<<endl;
        if(sum==0 || s.find(sum)!=s.end()){
            cout<<"true"; flag=1; break;
        }

        s.insert(sum);
    }
    if(flag==0)
        cout<<"false"<<endl;
}

int multiply(int x, int res[], int res_size)
int max=500;
void factorial(int n)
{
    int res[max];

    //initialize results
    res[0]=1;   int res_size=1;

    //Apply simple factorial n!=1*2*3...*n
    for(int x=2; x<=n; x++)
        res_size = multiply(x,res,res_size);

    cout<<"Factorial of number is:"<<endl;
    for(int i=res_size-1; i>=0; i--)
        cout<<res[i];
}
// This function multiplies x with the number  
// represented by res[]. 
// res_size is size of res[] or number of digits in the  
// number represented by res[]. This function uses simple  
// school mathematics for multiplication. 
// This function may value of res_size and returns the  
// new value of res_size 
int multiply(int x,int res[], int res_size)
{
    
}

int main(){
    //solve();
    //getPairsCount();
    //single();
    
    //distict_yearsString();
    //missing();
    //arrCount();
    //product();

    //rightside();
    //subarrSum();
    int n,t;
    
    return 0;


}
