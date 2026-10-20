class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //using vectors to store elements like vector temp -> temp[nums[i]] = nums[i];
        //check where is -1 present


        //using XOR ans = 0^0^1^1^2^3^3 will give ans 2
        int ans = nums[0];
        for(int i=1; i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        for(int i = 0; i<=nums.size(); i++){
            ans = ans ^ i;
        }
        return ans;

    }
};