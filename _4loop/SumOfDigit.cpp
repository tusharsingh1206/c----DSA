#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    while (n > 9)
    {
        int rem, sum = 0;
        while (n > 0)
        {
            
                rem = n % 10;
                n /= 10;
                sum += rem;
            
            
        }
        n = sum;
    }
    cout<<n;
    return 0;
}
