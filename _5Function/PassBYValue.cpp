// In this value of will not increase because
// only value of a will pass and value of n increase
// and this is known is pass by value....
#include <iostream>
using namespace std;
void incr(int n) // n is the copy of a
{
    n++;
    return ;
}
int main()
{
    int a;
    cout << "Enter value of a:";
    cin >> a;
    // cout<< incr(a)<<endl;-->>a=6
    incr(a);
    cout << a;
    return 0;
}