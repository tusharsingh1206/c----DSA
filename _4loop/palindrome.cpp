// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     int rev = 0, rem;
//     int q = n;
//     while (q != 0)
//     {
//         rem = q % 10;
//         q /= 10;
//         rev= rev*10 + rem;
//     }
//     if (rev == n)
//         cout << "Palindrome";
//     else
//         cout << "NOt Palindrome";
//     return 0;
// }
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,rem,q;
        while(x!=0){
            
             q=x;
            rem=q%10;
            q/=10;
            rev*=10+rem;
        }
        if(x<0)
        return 0;
        else if (rev==x)
        return 1;
        else 
        return 0;
    }
};