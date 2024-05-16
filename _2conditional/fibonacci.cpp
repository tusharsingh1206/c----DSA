#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0, b = 1, c;
    cout << "ENter value of n:";
    cin >> n;
    cout << "0"
         << " "
         << "1"
         << " ";
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout << c << " ";
    }
cout<<endl<<"N'th element of the fibonacci series is:"<<c;
    return 0;
}