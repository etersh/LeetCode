class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size(), t_size = t.size();
        if (s_size != t_size)
            return false;

        unordered_map<char, int> dc;

        // store letters
        for (int i = 0; i < s_size; i++)
            dc[s[i]]++;

        // check
        for (int i = 0; i < t_size; i++) {
            if (dc.find(t[i]) == dc.end())
                return false;
            else {
                dc[t[i]]--;
                if (dc[t[i]] < 0)
                    return false;
            }
        }

        return true;
    }
};