class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int n =digits.size()-1;
        while(carry && n>=0){
            if(digits[n]!=9){
                digits[n]+=carry;
                carry=0;
            }
            else{
                digits[n]=0;
                carry=1;
                n--;
            }
        }
        if(carry){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};