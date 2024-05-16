// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;

//     default:
//         cout << "Enter valid no.";
//     }
//     return 0;
// }
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int n, b, p, i, j;
    int m1, m2, hm, r1, r2;
    cin >> n >> b >> p >> i >> j;
    m1 = i / b;
    m2 = j / p;
    r1 = i % b;
    r2 = j % p;
    if (n < 0 || b < 0 || p < 0 || i < 0 || j < 0)
    {
        cout << "INVALID INPUT";
    }
    else if (r1 != 0 || r2 != 0)
    {
        hm = n - (m1 + m2 + 1);
        // hm = n -( m1 + m2 )+1;
        // hm = n - m1 + m2 +1;
    }
    else
    {
        hm = n - (m1 + m2);
    }
    cout << hm;
    return 0;
}