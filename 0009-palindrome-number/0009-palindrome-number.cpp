class Solution {
public:
    bool isPalindrome(int x) {
        long long ans = 0;
        int original = x;

        if(x<0){
            return false;
        }

        while(x>0){
            int remainder = x%10;
            ans = ans*10+remainder;
            x = x/10;
        }
        return original==ans;
    }
};