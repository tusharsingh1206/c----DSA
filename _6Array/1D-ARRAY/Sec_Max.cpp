#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[10] = {2, 3, 6, 8, 1, 33, 11, 35, 13, 7};
    int ans = INT_MIN;
    //Largedt elememnt....
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
    }
    //Sec largest element....
    int secmax=INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (ans != a[i])//yey upar wale loop ka maxim ans me store hu hai ...
        {
            secmax = max(secmax, a[i]); // secmax=INT_MIN aur a[i] me se jo bada hoga
        }
    }
    cout << secmax;
    return 0;
}