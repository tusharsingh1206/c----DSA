//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// ...................................................
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 6; i++)
//     {
//         for (j = 1; j <= 6; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for(i=1;i<=6;i++){
//         for(j=1;j<=6;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//...................................................
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1  4  9  16  25
// 1  4  9  16  25
// 1  4  9  16  25
// 1  4  9  16  25
// 1  4  9  16  25
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << j*j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1  8  27  64  125
// 1  8  27  64  125
// 1  8  27  64  125
// 1  8  27  64  125
// 1  8  27  64  125
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << j*j*j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     char ch='A';
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }
//...................................................
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)

//     {
//         char ch='A';
//         for (j = 1; j <= 5; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// A
// A B
// A B C
// A B C D
// A B C D E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;

//     for (i = 1; i <= 5; i++)
//     {
//         char ch='A';
//         for (j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// A B C D E
// A B C D
// A B C
// A B
// A
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         char ch='A';
//         for (j = 5; j >= i; j--)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// A-->>Z.......................
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     char ch = 'A';
//     for (j = 1; j <= 26; j++)
//     {
//         cout << ch << " ";
//         ch++;
//     }
//     return 0;
// }
//...................................................
// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     // int a = 1;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             //   cout << a << " ";
//             cout << (i - 1) * 5 + j;
//             // a++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//*
//* *
//* * *
//* * * *
//* * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         // for (j = 1; j <= i; j++)
//         // {
//         //     cout << (i+1)-j << " ";
//         // }
//         for (j = i; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// A
// B B
// C C C
// D D D D
// E E E E E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     char ch = 'A';
//     for (i = 1; i <= 5; i++)
//     {
//         // ch=ch+i-1;
//         for (j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }
//...................................................
//* * * * *
//* * * *
//* * *
//* *
//*
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"Enter value of n:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//...................................................
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n-i+1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
// //for(j=n;j>=n-i+1;j--)
//         for (j = 1; j <= i; j++)
//         {
// //cout<<j;
//             cout << n - j + 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//        *
//      * *
//    * * *
//  * * * *
//* * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";//two space givrn here for gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//    *
//   * *
//  * * *
// * * * *
//* * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << " ";//two space givrn here for gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//       1
//     2 2
//   3 3 3
// 4 4 4 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";//two space givrn here for gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << i<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//        1
//      1 2
//    1 2 3
//  1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";//two space givrn here for gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//        A
//      A B
//    A B C
//  A B C D
// A B C D E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  "; // two space givrn her efor gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//...................................................
//        1
//      2 1
//    3 2 1
//  4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  "; // two space givrn her efor gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << i - j + 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// ...................................................
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     int nst = 1;
//     cout << "Enter value of n:";
//     cin >> n;
//     int nsp = n - 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = nsp; k >= 1; k--)
//         {
//             cout << "  "; // two space givrn her efor gap in star
//         }
//         for (j = 1; j <= nst; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//         nsp--;
//         //nst =nst+2;
//         nst+=2;
//     }
//     return 0;
// }
// .......................(OR)............................
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         for (j = 1; j <= i - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// ......................(OR).............................
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= 2*i-1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// ...................................................
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         for (j = i - 1; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// ...................................................
//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     int p = 2 * n - 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = 1; k <= i - 1; k++)
//         {
//             cout << "  ";
//         }
//         for (j = p; j >= 1; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//         p -= 2;
//     }
//     return 0;
// }
// ...................................................
//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     int nsp = 0;
//     for (i = 1; i <= 2 * n; i++)
//     {
//         if (i <= n)
//         {
//             for (j = n; j >= i; j--)
//             {
//                 cout << "* ";
//             }
//             for (k = 1; k <= nsp; k++)
//             {
//                 cout << "  ";
//             }
//             for (j = n; j >= i; j--)
//             {
//                 cout << "* ";
//             }
//             cout << endl;
//             nsp = nsp + 2;
//         }
//         else
//         {
//              nsp=nsp-2;
//             for (j = 1; j <= i-n; j++)
//             {
//                 cout << "* ";
//             }
//             for (k = 1; k <= nsp; k++)
//             {
//                 cout << "  ";
//             }
//             for (j = 1; j <= i-n; j++)
//             {
//                 cout << "* ";
//             }
//             cout << endl;

//         }
//     }
//     return 0;
// }
//....................(OR...................................)
//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         for (k = 1; k <= 2 * n - 2 * i; k++)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         cout<<"* ";
//     }
//     for(k=1;k<=2*n-2*i;k++){
//         cout<<"  ";
//     }
//     for(j=1;j<=i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//     return 0;
// }
//....................................................................
//*
//* *
//* * *
//* * * *
//* * *
//* *
//*
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     int nst = 1;
//     for (i = 1; i <= 2 * n ; i++)
//     {
//         for (j = 1; j < nst; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//         if (i <= n)
//             nst++;
//         else
//             nst--;
//     }
//     return 0;
// }
//....................................................................
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         for (k = 1; k <= 2 * n - 2 * i; k++)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(i=n-1;i>=1;i--){
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         for(k=1;k<=2*n-2*i;k++){
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//............................................................
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, n;
//     cout << "Enter value of n:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n - 1; k >= i; k--)
//         {
//             cout << " ";//two space givrn here for gap in star
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(i=n;i>=1;i--){
//         for(k=1;k<=n-i;k++){
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//...................................................
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,k;
//     cout<<"Enter value of n:";
//     cin>>n;
//     return 0;
// }
//.....................................................
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A
#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        char ch='A';
        for(k=n-1;k>=i;k--){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        for(j=i-1;j>=1;j--){
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
//.....................................................
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n, k;
//     cout << "Enter value of n:";
//     cin >> n;
//         int p = 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = n-1; k >= i; k--)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= p; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//         p=p+2;
//     }
//     return 0;
// }
//.....................................................
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,k;
//     cout<<"Enter value of n:";
//     cin>>n;
// for(i=1;i<=n;i++){
//     for(k=n-1;k>=i;k--){
//         cout<<"  ";
//     }
//     for(j=i;j>=1;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
//     return 0;
// }
//.....................................................
//         A
//       B B
//     C C C
//   D D D D
// E E E E E
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,k;
//     cout<<"Enter value of n:";
//     cin>>n;
//     char ch ='A';
//     for(i=1;i<=n;i++){
//         for(k=n-1;k>=i;k--){
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//         ch++;
//     }
//     return 0;
// }
//.....................................................
//         5
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,k;
//     cout<<"Enter value of n:";
//     cin>>n;
//         for(i=1;i<=n;i++){
//         for(k=n-1;k>=i;k--){
//             cout<<"  ";
//         }
//         for(j=n;j>=n-i+1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//.....................................................
//         E
//       E D
//     E D C
//   E D C B
// E D C B A
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,k;
//     cout<<"Enter value of n:";
//     cin>>n;

// for(i=1;i<=n;i++){
//     char ch='E';
//     for(k=n-1;k>=i;k--){
//         cout<<"  ";
//     }
//     for(j=1;j<=i;j++){
//         cout<<ch<<" ";
//         ch--;
//     }
//     cout<<endl;;
// }
//     return 0;
// }
//.....................................................
