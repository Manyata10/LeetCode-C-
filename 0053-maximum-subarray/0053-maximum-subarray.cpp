class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int ans = INT_MIN;
        // int curr = 0;
        // for(int i:nums){
        //     curr+=i;
        //     ans = max(ans,curr);
        //     if(curr<0){
        //         curr=0;
        //     }
        // }
        // return ans;
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};