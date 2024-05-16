#include <iostream>
using namespace std;
int fact(int n = 3) // Default paramater........
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = i * ans;
    } 
    return ans;
}
int main()
{
    int a;
    cout << "Enter value of a:";
    cin >> a;
    // When no argument pass from here then default parameter used
    cout << fact()<<endl;
    // When argument will pass the it will take the passd value
    cout << fact(a)<<endl;
    return 0;
}