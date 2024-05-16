#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[5] = {1, 5, 3, 9, 7};
    int ans = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < ans)
            ans = a[i];
    }
    cout << ans;
    return 0;
}