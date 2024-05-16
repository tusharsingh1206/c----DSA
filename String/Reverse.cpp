#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your string";
    getline(cin, s);
    cout << "Given string is: " << s << endl;
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout <<"Reverse string is: "<< s << endl;
    cout <<"size of the string: "<< end << endl;
    return 0;
}