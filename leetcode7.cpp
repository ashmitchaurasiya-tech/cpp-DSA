#include<iostream>
using namespace std;

int reverse(int num){
    int rem;
    int ans=0;

    while(num!=0){
        rem =num%10;
        ans = ans*10+rem;
        num=num/10;
    }
    return ans;
}

int main(){

    int num;
    cout << "Enter a num: ";
    cin >> num;

    cout << reverse(num) << endl;
    
    return 0;
}

// class Solution {
// public:
//     int reverse(int x) {
        
//         int ans=0;
//         while(x!=0){
//             int digit=x%10;

//             if ((ans >INT_MAX/10)||(ans<INT_MIN/10)){
//                 return 0;
//             }

//             ans= ans*10+digit;
//             x=x/10;
//         }
//         return ans;
//     }
// };