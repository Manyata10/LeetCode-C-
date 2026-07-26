class Solution {
public:
    string reverseWords(string s) {
        // string result = "";
        // int n = s.size();
        // int i=0, j;
        // while(i<n){
        //     while(i < n && s[i]==' ') i++;
        //     if(i>=n) break;
        //     j=i+1;
        //     while(j<n && s[j]!=' ') j++;
        //     string word = s.substr(i,j-i);
        //     if(result.length() == 0){
        //         result = word;
        //     }
        //     else result = word + " " + result;
        //     i = j+1;
        // }
        // return result;

        // Result string to store final output
        string result = "";
        
        // Pointer starting from the last character
        int i = s.size() - 1;
        
        // Traverse string from right to left
        while (i >= 0) {
            // Skip spaces at the current position
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            
            // If pointer is out of bounds, break
            if (i < 0) break;
            
            // Mark the end of the current word
            int end = i;
            
            // Move left until a space or start of string is found
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            
            // Extract the current word
            string word = s.substr(i + 1, end - i);
            
            // Add space before appending next word if result is not empty
            if (!result.empty()) {
                result += " ";
            }
            
            // Append the word to the result
            result += word;
        }
        
        return result;

    }
};