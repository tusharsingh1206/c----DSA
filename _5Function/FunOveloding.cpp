// //Swap using function here S will capital letter.....
// #include <iostream>
// using namespace std;
// //VaPass by vlue ....
// // void swap(int m, int n)
// // Pass By reference....
// void Swap(int &m, int &n) //int type parameter 
// {
//     int p = m;
//     m = n;
//     n = p;
//     return;
// }
// //Function overloading
// //Function have same name but diffrent parameters...
// void Swap(float &c, float &d)//float type parameter 
// {
//     float p = c;
//     c = d;
//     d = p;
//     return;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter value of a:";
//     cin >> a;
//     cout << "Enter value of b:";
//     cin >> b;
//     cout << "Before swapping:" << a << " " << b << endl;
//     Swap(a, b);
//     cout << "After swpping a and b:" << a << " " << b << endl;
//     float f1 = 3.4, f2 = 5.3;
//     cout<<"Before swapping f1 and f2:"<<f1<<" "<<f2<<endl;
//     Swap(f1, f2);
//     cout<<"After swapping f1 and f2:"<<f1<<" "<<f2<<endl;
//     return 0;
// }
//swap using inbuilt function s will small.....
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    cout << "Before swapping:" << a << " " << b << endl;
    swap(a, b);
    cout << "After swpping a and b:" << a << " " << b << endl;
    float f1 = 3.4, f2 = 5.3;
    cout<<"Before swapping f1 and f2:"<<f1<<" "<<f2<<endl;
    swap(f1, f2);
    cout<<"After swapping f1 and f2:"<<f1<<" "<<f2<<endl;
    return 0;
}