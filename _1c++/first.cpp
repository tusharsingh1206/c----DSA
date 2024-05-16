#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=4;
    char c='A';
    float f=1.234;
    bool b=true;
    int is=sizeof(a);//4 byte-->32 bit
    int cs=sizeof(c);//1 byte-->8 bit
    int fs=sizeof(f);//4 byte-->32 bit
    int bs=sizeof(b);//1 byte-->8 bit
    cout<<"HEllo Coder Army"<<endl;
    cout<<2+3<<endl;
    cout<<c<<endl<<b<<endl<<f<<endl;
    cout<<is<<endl<<cs<<endl<<fs<<endl<<bs<<endl;
    return 0;
}