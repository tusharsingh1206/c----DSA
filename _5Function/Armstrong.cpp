#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <list>
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
#include <algorithm>
#include <unordered_map>
using namespace std;
int countdigit(int n)//num=n
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
bool armstrong(int a, int b) // num=a,digit=b
{
    int ans = 0, rem, q = a;
    while (q != 0)
    {
        rem = q % 10;
        q /= 10;
        ans = ans + pow(rem, b);
    }
    if (ans == a)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "Enter value of num:";
    cin >> num;
    // Cout of Digits
    int digit = countdigit(num);
    // Armstrong NO.
    cout << armstrong(num, digit);
    return 0;
}