class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int last = s.size() - 1;
        bool counting = false;

        for (int i = last; i >= 0; i--) {
            if (s[i] != ' ') {
                len++;
                counting = true;
            } else if (counting) {
                break;
            }
        }

        return len;
    }
};