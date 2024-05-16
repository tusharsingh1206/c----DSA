// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=10;i>=1;i--){
//         cout<<i<<" ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cout << "Enter value of n:";
    cin >> n;
    for (i = 1; i <= n; i = i + 3)
    {
        cout << i << " ";
        count++;
    }
    cout << endl
         << count;
    return 0;
}