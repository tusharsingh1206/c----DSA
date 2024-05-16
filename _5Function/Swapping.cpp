#include <iostream>
using namespace std;
//void swap(int m, int n)//Value will not swap....
void swap(int &m, int &n)//Pass By reference....
{
    int p = m;
    m = n;
    n = p;
    return;
}
int main()
{
    int a, b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    cout<<"Before swapping:"<<a<<" "<<b<<endl;
    swap(a, b);
    cout <<"After swpping a and b:" <<a<<" "<<b<<endl;
    return 0;
}