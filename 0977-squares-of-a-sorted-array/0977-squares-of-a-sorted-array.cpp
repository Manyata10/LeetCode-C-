class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0, r = nums.size()-1; //two pointers
        vector<int> ans; 
        while(l<=r){
            int a = pow(nums[l],2);
            int b = pow(nums[r],2);
            if(a > b){
                ans.push_back(a);
                l++;
            }
            else{
                ans.push_back(b);
                r--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};