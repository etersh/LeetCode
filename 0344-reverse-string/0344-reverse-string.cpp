class Solution {
public:
    void reverseString(vector<char>& s) {
        //... forgot how to
        int idx = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++) {
            char orig = s[idx];
            s[idx--] = s[i];
            s[i] = orig;
        }
    }
};