class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //if mod 10 the ans will be 0-9
        // if mod n then asn will be 0-n-1
        //n+k%n
        int n= nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};