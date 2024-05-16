#include <iostream>
using namespace std;
int main()
{
    string str = "Hello i am \"Tushar\" singh.";
    string str1 = "\\";
    string s;
    getline(cin, s);
    cout << s.size()<<endl;
    cout << str << " " << str1<<endl;
    //Printing null character....
    string st="\\0";
    cout<<st;
    return 0;
}