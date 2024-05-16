// In this value of will  increase because
// here no copy of a will creane as n
// and this is known is pass by reference....
#include <iostream>
using namespace std;
void incr(int &n) // n is the copy of a
{
    n++;
    return;
}
int main()
{
    int a;
    cout << "Enter value of a:";
    cin >> a;
    incr(a);
    cout << a;//Here a will increase.....
    return 0;
}