#include <iostream>
using namespace std;
int main()
{
int n=10;
cout<<n<<" ";
//int n=30//wrong because we initialise before
 n=30;
cout<<n<<" ";
if(n==30){
    int n=400;//valid because it useses it local value
    cout<<n<<" ";
}
cout<<n<<"  ";
    return 0;
}