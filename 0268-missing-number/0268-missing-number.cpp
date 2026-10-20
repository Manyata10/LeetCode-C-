class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //using vectors to store elements like vector temp -> temp[nums[i]] = nums[i];
        //check where is -1 present


        //using XOR ans = 0^0^1^1^2^3^3 will give ans 2
        int ans = nums.size(); //xoring earlier bcauz in loop it will be skipped
        for(int i=0; i<nums.size(); i++){ //loop will run till 2 not 3 if n=3, so we did xor with 3 in startiing
            ans = ans ^ nums[i] ^ i;
        }

        return ans;

    }
};