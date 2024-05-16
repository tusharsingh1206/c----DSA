#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int rem,ans=0,multi=1;
    while(n!=0){
rem=n%8;
n/=8;
ans+=rem*multi;
multi*=10;;
    }
    cout<<ans;
    return 0;
}