class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size(), t_size = t.size();
        if (s_size != t_size)
            return false;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        // store letters
        for (int i = 0; i < s_size; i++)
            m1[s[i]]++;
        for (int i = 0; i < t_size; i++)
            m2[t[i]]++;

        if (m1 == m2)
            return true;

        return false;
    }
};