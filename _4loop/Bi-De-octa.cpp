//BINARY TO OCTAL................
//TO CONVERT BINARY TO OCTAL WE HAVE TO FOLLOW...
//BINARY-->DECIMAL-->>OCTAL........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    //bianry to decimal...
    int rem,ans=0,multi=1;
    while(n!=0){
        rem=n%10;
        n/=10;
        ans+=rem*multi;
        multi*=2;
    }
    cout<<"Binary to Decimal is:"<<ans<<endl;
    //decimal to octal.........
    int oct=0,m=1;
while(ans!=0){
    rem=ans%8;
        ans/=8;
        oct+=rem*m;
        m*=10;
}
cout<<"Decimal to Octal is:"<<oct;
    return 0;
}