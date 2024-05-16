#include <iostream>
using namespace std;
void prime(int a)
{
    if (a < 2)
    {
        cout << "not prime" << endl;
        return;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "not prime" << endl;
            return;
        }
        else
            cout << "Prime" << endl;
        return;
    }
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    prime(n);
}