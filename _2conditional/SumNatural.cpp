// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout << "Sum of no's up to n is:" << sum;
//     return 0;
// }
//sum of square of no's up to n...................
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter value of n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum +i*i;
    }
    cout << "Sum of no's up to n is:" << sum;
    return 0;
}