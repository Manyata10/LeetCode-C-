class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // if(str.empty()) return "";
        // sort(str.begin(), str.end());
        // string first = str[0];
        // string last = str[str.size()-1];
        // string ans = "";
        // int minLength = min(first.size(), last.size());
        // for(int i=0; i<minLength; i++){
        //     if(first[i] != last[i]){
        //         break;
        //     }
        //     ans+=first[i];
        // }
        // return ans;
        string temp = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] != strs[i][j]) {
                    temp.erase(j);
                    break;
                }
            }
        }
        return temp;
    }
};