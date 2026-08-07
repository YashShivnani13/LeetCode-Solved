class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                count++;
                return 1;
            }
            else{
                count=1;
            }
        }
        return 0;
    }
};