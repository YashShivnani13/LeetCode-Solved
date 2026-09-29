class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int ans = nums[0];

        for(int i = 0; i < nums.size(); i++) {

            int mul = 1;

            for(int j = i; j < nums.size(); j++) {

                mul = mul * nums[j];

                ans = max(ans, mul);
            }
        }

        return ans;
    }
};