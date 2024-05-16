// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch[10];
//     cout << "Enter any name:";
//     cin >> ch;
//     ch[3]='\0';
//      cout << ch << " ";
//     return 0;
// }
//...................
// CIN ME YADI HAM SPACE ,ENTER YA TAB PRESS KRENGE TO
// VO USKE AAGE READ NAHI KREGA
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = {"Tushar Singh"};
//     // cin>>s;
//     cout << s;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    return 0;
}