class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum;
        double currSum = 0;

        for(int i=0;i<k; i++) currSum+=nums[i];
        maxSum = currSum;
        for(int i = k; i<nums.size(); i++){
            currSum=currSum - nums[i-k] + nums[i];
            maxSum = max(currSum, maxSum);
        }
        return maxSum/k;
    }
};