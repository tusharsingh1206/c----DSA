#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[5] = {4, 5, 8, 9, 2};
    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
    }
    cout << ans;
    return 0;
}