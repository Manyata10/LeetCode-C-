class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Brute Force
        //Better-Hashing
        map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int b = target-a;;
            if(mpp.find(b)!=mpp.end()){
                return {i, mpp.find(b)->second};
            }
            mpp[a]=i;
        }
        return {NULL, NULL};
    }
};