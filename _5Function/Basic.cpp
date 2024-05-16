#include <iostream>
using namespace std;
bool prime(int x)//X=parameter.....
{
    //To check prime
    if (x < 2)
        return 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int fact(int y)
{
    //for factorial.........
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    cout << prime(a) << endl;
    cout << fact(a)<<endl;//jo yaha pass hoga vo hi upar jayega
   cout<<fact(a-b);
   //a,b,(a-b)-->>ARGUMENT
    return 0;
}
