#include <iostream>
using namespace std;
int main()
{
    string str1, str2, str3;

    // Taking Input of the string
    getline(cin, str2);
    getline(cin, str1);

    // Adding tow string
    str3 = str1 + str2;
          // Or
    // string str3=str1.append(str2);
    cout << str3 << endl;

    // Size of the string
    cout << str1.size() << endl;
    cout << str2.size() << endl;
    cout << str3.size() << endl;

    // Adding something at the last of the string
    str3.push_back('T');
    cout << str3 << endl;

    // Removing one character from the end of the string
    str3.pop_back();
    cout << str3 << endl;

    return 0;
}