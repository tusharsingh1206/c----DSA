#include <iostream>
using namespace std;
char convert(char name)
{
    // jo bhi char input lenge usko a se minus krnrge
    // to unke bich ka diffr pata chal jayega aur fir A
    // ko add kr ke usko capital me pa lenge
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char ch;
    cin >> ch;
    cout << convert(ch);
    return 0;
}