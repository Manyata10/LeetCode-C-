class Solution {
public:
    bool isPalindrome(long int x) {
        long int dup = x;
        long int revNum=0;
        while(dup>0){
            revNum = (revNum*10) + dup%10;
            dup /= 10;
        }
        if(x==revNum) return true;
        else return false;
    }
};