//BITWISE OPERATOR.....................
//(&,|.^,~,<<,>>)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     if(n==1) cout<<"one";
//     else if(n==2) cout<<"two";
//     else if(n==3) cout<<"three";
//     else if(n==4) cout<<"four";
//     else if(n==5) cout<<"five";
//     else if(n==6) cout<<"six";
//     else if(n==7) cout<<"seven";
//     else if(n==8) cout<<"eight";
//     else if(n==9) cout<<"nine";
//     else cout<<"Greater then 9";
//     return 0;
// }
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main()
// {
//     int n, b, a;
//     cout << "Enter n:";
//     cin >> n;
//     cout << "Enter a:";
//     cin >> a;
//     cout << "Enter b:";
//     cin >> b;
//     if (a <= b)
//     {
//         for (int i = a; i <= b; i++)
//         {
//             for(int n=1;n<=9;n++)
//             {
//                 if (i == 1)
//                     cout << "one" << endl;
//                 else if (i == 2)
//                     cout << "two" << endl;
//                 else if (i == 3)
//                     cout << "three" << endl;
//                 else if (i == 4)
//                     cout << "four" << endl;
//                 else if (i == 5)
//                     cout << "five" << endl;
//                 else if (i == 6)
//                     cout << "six" << endl;
//                 else if (i == 7)
//                     cout << "seven" << endl;
//                 else if (i == 8)
//                     cout << "eight" << endl;
//                 else
//                     cout << "nine" << endl;
//             }
//             else
//             {
//                 if (i % 2 == 0)
//                     cout << "even" << endl;
//                 else
//                     cout << "odd" << endl;
//             }
//         }
//     }
//     return 0;
// }
//.......................................................
//SUM UP TO N...........................
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
// cin>>n;
// int i=1,sum=0;
// while(i<=n){
//     sum=sum+i;
//     i++;
// }
// cout<<sum;
// return 0;
// }
//1 to 10........................................
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
// while(i<=10){
//     cout<<i<<endl;
//     i++;
// }
// return 0;
// }/
//FACTOR........................
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int count=0;
//     int i=1;
//     while(i<=n){
//         if(n%i==0){
//             count++;
//             cout<<i<<endl;
//         }
//          i++;
//     }
//     cout<<"No of factor is:"<<count;
//     return 0;
// }
//even and odd..........................
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         if(i%2==0){
//             cout<<i<<" is even"<<endl;
//         }
//         else cout<<i<<" is odd  ";
//          i++;
//     }
    
//     return 0;
// }