#include <iostream>
using namespace std;
int main()
{
    // int a[5]={0,4,5,6};
    // for(int i=0;i<5;i++)

    // int a[]={1,2,3,4,5,56,9};
    // for(int i=0;i<7;i++)
//BAD WAY TO INITIALISE N ARRAY................
    // int size;
    // cout<<"Enter value of size";
    // cin >> size;
    // int a[size];
    // for ( int  i = 0; i < size; i++)
    // {
    //     cin >> a[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << " ";
    // }
//BEST WAY TO INITIALISE AN ARRAY...........
    int size;
     cout<<"Enter value of size:";
    cin>>size;
    int a[1000];
    for ( int  i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<size;i++){
        cout << a[i] << " ";
    }
    cout<<endl<<"Size of the array:";
    cout<<sizeof(a)<<" "<<endl;
    cout<<"No of elements in the given array is:";  
    cout<<sizeof(a)/sizeof(a[0])<<" ";
    return 0;
}