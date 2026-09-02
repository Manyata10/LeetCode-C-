class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach=0;
        int n = nums.size()-1;
        for(int i=0;i<=n;i++){
            if(i>maxReach) return false;
            maxReach = max(maxReach,i+nums[i]);
            if(maxReach>=n) return true;
        }
        return true;

    }
};