class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]+=1;
        }
        int sum=0;
        int maxi=INT_MIN;
        for(auto x: mpp){
            if(x.second>maxi){
                maxi=x.second;
                sum=0;
                sum+=x.second;
            }
            else if(x.second==maxi){
                sum+=x.second;
            }
        }
        return sum;
    }
};