class Solution {
public:
    bool isPalindrome(int x) {
        long long original=x;
        long long ans=0;
        while(x>0){
            int rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        }
        return ans==original;
    }
};