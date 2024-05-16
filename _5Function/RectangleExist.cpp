#include <iostream>
using namespace std;
bool rectangle(int m, int n, int o, int p)
{
    if (m == n && o == p || m == o && n == p || m == p && n == o)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout<<rectangle(a, b, c, d);
    
    return 0;
}