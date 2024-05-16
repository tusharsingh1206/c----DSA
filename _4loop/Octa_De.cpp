#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int rem,ans=0,multi=1;
while(n!=0){
    rem=n%10;
    n/=10;
    ans+=rem*multi;
    multi*=8;
}
cout<<ans;
    return 0;
}