class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = -1, freq = 0;
        // unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(freq==0){
                element = nums[i];
                freq = 1;
            }
            else{
                if(nums[i] == element){
                    freq++;
                }
                else{
                    freq--;
                }
            }
        }
        return element;
    }
};