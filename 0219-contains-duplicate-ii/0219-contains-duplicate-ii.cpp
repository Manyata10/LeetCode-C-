class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndex;
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(numIndex.find(nums[i])!= numIndex.end()){
                if(abs(i - numIndex[nums[i]]) <= k){
                    return true;
                }
            }
            numIndex[nums[i]] = i;
        }
        return false;
    }
};