//With using library function...
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int m=str.size();
//     cout<<m<<endl;
//     return 0;
// }
//Without using library function......
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
   int start=0;
   while(str[start]!='\0'){
start++;
   }
   cout<<start;
    return 0;
}