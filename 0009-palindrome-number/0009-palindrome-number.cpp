class Solution {
public:
    bool isPalindrome(int x) {
        // 0. convert to string solution
        string s = to_string(x);
        int last = s.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[last--])
                return false;
        }
        return true;
    }
};