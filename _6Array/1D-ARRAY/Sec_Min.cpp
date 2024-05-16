#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[10] = {2, 3, 6, 8, 1, 33, 11, 35, 13, 7};
    int ans = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < ans)
        {
            ans = a[i];
        }
    }
    int secmin = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (ans != a[i]) // yey upar wale loop ka minnimum ans me store hu hai ...
        {
            secmin = min(secmin, a[i]); // secmin=INT_MAX aur a[i] me se jo chots  hoga
        }
    }
    cout << secmin;
    return 0;
}