class Solution {
public:
    void reverseString(vector<char>& s) {
        int idx = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++) {
            swap(s[idx--], s[i]);
        }
    }
};