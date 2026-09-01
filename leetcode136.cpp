#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans=0;

    for(int val:nums){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int>vec={1,2,3,3,1};

    cout << singleNumber(vec) <<endl;
    return 0;
}

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;

//         for(int val:nums){
//             ans^=val;
//         }
//         return ans;
//     }
// };