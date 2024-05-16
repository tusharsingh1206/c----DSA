// LOGIC-->>SUM UP TO N AND THE MINUS SUM OF THE ARRAY WE FIND
//  THE MISSING ELEMENT ,NO ELEMENT WILL REPEAT
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Entr n:";
    cin >> n;
    int a[n];
    cout<<"Entr arry element:";
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    int sum, sumary = 0, ans;
    sum = n * (n + 1) / 2;
    for (int i = 0; i < n-1; i++)
    {
        sumary = sumary + a[i];
    }
    ans = sum - sumary;
    cout << "Missing element is :" << ans;
    return 0;
}