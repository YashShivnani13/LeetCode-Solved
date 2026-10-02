class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int duplicate = -1;

        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];

            if(i > 0 && nums[i] == nums[i-1]) {
                duplicate = nums[i];
            }
        }

        int expectedSum = n * (n + 1) / 2;

        int missing = expectedSum - sum + duplicate;

        return {duplicate, missing};
    }
};