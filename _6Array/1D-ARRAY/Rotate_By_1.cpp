#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int a[n];
    cout << "Element of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        a[i+ 1]=a[i];
    }
    a[0]=temp;
     for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    return 0;
}