#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
            continue;
        cout << i << " ";
    }
    return 0;
}