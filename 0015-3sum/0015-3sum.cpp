class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int left=i+1,right=n-1;
            while(left < right) {
            int sum = nums[left] + nums[right];

                if(sum == -nums[i]) {
                    ans.push_back({nums[i], nums[left], nums[right]});  // ⬅️ The push_back you asked for
                    
                    // skip duplicates
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                }
                else if(sum < -nums[i]) left++;
                else right--;
            }
        }
        return ans;
    }
};