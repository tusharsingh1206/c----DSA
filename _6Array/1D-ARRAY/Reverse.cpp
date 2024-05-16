// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[1000];
//     cout << "Enter elements of the array:";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 4; i >= 0; i--)
//     {
//         cout << a[i]<<" ";
//     }
//     return 0;
// }
// ANOTHER WAY TO REVERSE AN ARRAY IN SAME ARRAY..........
// BY COYPING IN ANOTHER ARRAY AND THE AGAIN COPY IN SAME ARAY.........
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5], b[5];
//     cout << "Enter elements of the array:";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     int i = 4, j = 0;
//     while (i >= 0)
//     {
//         b[j] = a[i];
//         j++;
//         i--;
//     }
//     i=0,j=0;
//     while(j<=4){
//         a[i]=b[j];
//         i++;
//         j++;
//     }
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// BY SWAPPING THE ARRAY .................
#include <iostream>
using namespace std;
int main()
{
    int a[6];
    cout << "Enter elements of the array:";
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    int i = 0, j = 5;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++, j--;
        // int temp = a[j];
        // a[j] = a[i];
        // a[i] = temp;
        // i++;
        // j--;
    }
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
    return 0;
}
