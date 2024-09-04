class Solution {
public:
    bool isPalindrome(int x) {
        // 1. to string
        string s = to_string(x);
        string comp;

        for (int i = s.length() - 1; i >= 0; i--) {
            comp += s[i];
        }

        if (s == comp)
            return 1;
        else
            return 0;

        // 2. separate units

        
    }
};