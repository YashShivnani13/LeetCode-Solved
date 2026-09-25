class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int s = 1;
        int e = *max_element(nums.begin(), nums.end());

        while(s <= e) {

            int mid = s + (e - s) / 2;

            long long sum = 0;

            for(int i = 0; i < nums.size(); i++) {
                sum += ceil((double)nums[i] / (double)mid);
            }

            if(sum > threshold) {
                // divisor is too small
                s = mid + 1;
            }
            else {
                // divisor works, try smaller
                e = mid - 1;
            }
        }

        return s;
    }
};