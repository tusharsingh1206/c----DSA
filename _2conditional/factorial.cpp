#include <iostream>
using namespace std;
int main()
{
    int n,fact = 1;
    cout << "Enter value of n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of no's up to n is:" << fact;
    return 0;
}