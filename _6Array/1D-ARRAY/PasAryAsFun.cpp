// #include <iostream>
// using namespace std;
// // Type funnction name(arry name[],int size as varible)
// void fun(int a[], int n)
// {
//     cout<<sizeof(a)<<endl;
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
// }
// int main()
// {
//     int arr[5]={1,2,4,3,6};
//     cout<<sizeof(arr)<<endl;
//     // function name(array name,size of array);
//     fun(arr, 5);
// }
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << fixed << setprecision(2) << number ;
    return 0;
}
