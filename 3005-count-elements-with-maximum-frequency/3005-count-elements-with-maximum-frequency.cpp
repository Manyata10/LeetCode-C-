class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]+=1;
            maxi=max(maxi, mpp[nums[i]]);
        }
        int sum=0;
        for(auto x: mpp){
            if(x.second==maxi){
                sum+=x.second;
            }
        }
        return sum;
    }
};