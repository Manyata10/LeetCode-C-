class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit from x
            
            // Overflow Check for positive boundary (2,147,483,647)
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            
            // Underflow Check for negative boundary (-2,147,483,648)
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            
            // Push the digit to the reversed result
            reversed = reversed * 10 + pop;
        }
        
        return reversed;
    }
};