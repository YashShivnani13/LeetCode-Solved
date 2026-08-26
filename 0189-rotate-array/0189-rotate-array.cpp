class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> arr;
        int ans = nums.size() - k ;
        for(int i=ans; i<nums.size(); i++){
            arr.push_back(nums[i]);
        }

        for(int i=0; i<ans; i++){
            arr.push_back(nums[i]);
        }

        for(int i=0; i<nums.size(); i++){
            nums[i] = arr[i];
        }
    }
};