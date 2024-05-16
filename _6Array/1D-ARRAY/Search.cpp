#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    cout << "Enter elements of the array:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int n;
    cout << "Enter the element to search:";
    cin >> n;
    int index;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            index = i;
            cout << "Element found at the index is:" << index;
            break;
        }
        else
            cout << "Element not found in the array";
        break;
    }

    return 0;
}