#include <iostream>
using namespace std;
int sum(int m, int n) // Function Declare...
{
    // Function Define.....What happen in below....
    int s = m + n;
    return s;
}
int multi(int a, int b)
{
    int ans = a * b;
    return ans;
}
void fun()
{
    cout << "HEllo Tushar Singh";
}
int main()
{
    int a, b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    int p, q;
    cout << "Enter value of p:";
    cin >> p;
    cout << "Enter value of q:";
    cin >> q;
    // Sum Call.......
    cout << sum(a, b) << endl;
    // int ans = sum(a, b);
    // cout << ans << endl;
    cout << sum(p, q) << endl;
    cout << multi(a, b) << endl;
    fun(); // Yaha pe kuch print nahi hoga kyuki
    // upae se kuch return hi nahi hua hai..
    return 0;
}
//Yadi jab hame koi value return nahi karni hogi tab ham 
//vahi upar hi print kara denge....