// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter value of n:";
//     cin >> n;
//     int rem, ans = 0, multi = 1;
//     while (n > 0)
//     {
//         // remainder...
//         rem = n % 2; // 13 ko 0 bananae ke liye...
//         // quocient...
//         n = n / 2; // quocient pane ke liye taki aage bhi divide kr paye
//         // remainder ko 0 bana ske.....
//         // ans....
//         ans += rem * multi;
//         // multipli....
//         multi *= 10;
//     }
//     cout << ans;
//     return 0;
// }
//..................................
#include<iostream>
using namespace std;
int main(){
    int n,ans=0,rem,multi=1;
    cout<<"Enter value of n:";
    cin>>n;
    while(n>0){
rem=n%2;
n=n/2;
ans+=rem*multi;
multi*=10;
    }
    cout<<ans;
    return 0;
}