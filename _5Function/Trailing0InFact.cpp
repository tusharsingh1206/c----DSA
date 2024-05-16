// #include <iostream>
// using namespace std;
// int fact(int num)
// {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     cout << "Enter value of n:";
//     cin >> n;
//     // Factorial....
//     int ans = fact(n);
//     // Traing zero in factorial....
//     cout << ans << endl;
//     int rem, count = 0;
//     while ((ans % 10) == 0)
//     {
//         rem = ans % 10;
//         if (rem == 0)
//         {
//             count++;
//             ans /= 10;
//         }
//     }
//     cout << count;
//     return 0;
// }
/*ANOTHER APPROACH......................
KISI KE FACTORIAL ME ZEROS NIKALANE KE LIYE HAME
NO OF 5 AUR 2 DEKHNA PADEGA AUR NO OF FIVE HAMEASHA
NO OF 2 SE KAM HI RAHEGA AUR 5*2=10 HOTA HAI TO
YADI MUJHE NO OF 5 PATA CHAL JAYE TO MAI NO 0 BATA DUNGA
NO OF 5 ==NO OF 0 IN ANY NO FACTORIAL.... */
//LECTURE NO --->>>15
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
int count=0;
while(n>=5){
    count+=n/5;
n/=5;
}
cout<<count;
return 0;
    return 0;
}