class Solution {
public:
    string smallestPalindrome(string s) {
        int size = s.length();
        int mid = size/2;
        sort(s.begin(), s.begin()+mid);
        for(int i=0; i<mid; i++){
            s[size-i-1] = s[i];
        }
        return s;
    }
};