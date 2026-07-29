class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;


        int l=0, r = nums.size()-1; //two pointers
        int pos = nums.size()-1;
        vector<int> ans(r+1); 
        while(l<=r){
            int a = pow(nums[l],2);
            int b = pow(nums[r],2);
            if(a > b){
                ans[pos]=a;
                l++;
            }
            else{
                ans[pos]=b;
                r--;
            }
            pos--;
        }
        return ans;
    }
};