#include <iostream>
using namespace std;
int main() {
    int n=9;
    int arr[n]={1,2,3,4,5,5,6,7,8};
    int ls[n]={0,0,0,0,0,0,0,0,0};
    for(int i=0; i<9; i++){
        if(ls[arr[i]]!=1){
            ls[arr[i]]++;
        }
        else{
            cout<<arr[i];
        }
    }
    return 0;
}
