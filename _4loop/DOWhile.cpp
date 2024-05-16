//1 TO 10...................
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }
// while(i<=10);
//     return 0;
// }
//SUM OF N NUMBERS..........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1,sum=0;
    do{
        sum=sum+i;
        i++;
         cout<<sum<<endl;
    }
   
    while(i<=n);
    return 0;
}