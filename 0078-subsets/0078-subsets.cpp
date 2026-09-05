class Solution {

private:
    void solve(vector<int> nums, vector<int> current, int index, vector<vector<int>>& ans){

        //base case
        if(index>=nums.size()){
            ans.push_back(current);
            return;
        }

        //exclude
        solve(nums, current, index+1, ans);

        //include
        int element = nums[index];
        current.push_back(element);
        solve(nums, current, index+1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        int index = 0;

        solve(nums, current, index, ans);
        return ans;
    }
};