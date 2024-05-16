#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int rem, multi = 1, ans = 0;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        if(rem==1) rem=0;
        else rem=1;
        //rem=mer^1;
        ans =ans+ multi*rem;
        multi *= 2;
    }
  
    cout << ans;
    return 0;
}
