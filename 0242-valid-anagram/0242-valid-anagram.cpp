class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        if(s.length()!=t.length()){
            return false;
        }
        for(char c : s){
            freq[c -'a']++;
        }
        for(char c : t){
            freq[c-'a']--;
        }
        for(int i : freq){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};