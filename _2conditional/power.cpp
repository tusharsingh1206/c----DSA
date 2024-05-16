#include<iostream>
using namespace std;
int main(){
    int n,pow,a=1;
 cout<<"Enter value of n:";
 cin>>n;
 cout<<"Enter value of power:";
 cin>>pow;
 for(int i=1;i<=pow;i++){
 a=a*n;
cout<<a<<endl;//all powers print here.
 }
 cout<<a;//only final answer will print here.
    return 0;
}
//.....................................
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, pow, a;
//     cout << "Enter value of n:";
//     cin >> n;
//     cout << "Enter value of power:";
//     cin >> pow;
//     a = n;
//     for (int i = 1; i < pow; i++)
//     {
//         a = a * n;
//     }
//     cout << a; // only final answer will print here.
//     return 0;
// }