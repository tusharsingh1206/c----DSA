#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int a[1000];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    // Nth no of fibonacci series...
    cout << a[n - 1] << " ";
}