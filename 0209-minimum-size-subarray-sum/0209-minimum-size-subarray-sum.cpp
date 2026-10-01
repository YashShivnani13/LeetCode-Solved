class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0;
        int res = INT_MAX;
        int sum = 0;

        while(high < nums.size()){
            sum += nums[high];
            
            //agar sum of window is more than target then we reduce window size
            while(sum >= target){
                int len = high-low+1;

                res = min(res,len);

                sum -= nums[low];
                low++;
            }
            high++;   //agar sum of window is less than target then we increase window size
        }
        if(res == INT_MAX) return 0;
        
        return res;
    }
};