class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev = "";
        int i, j, len = s.length() - 1;

        for (i = len; i >= 0; i--) rev += s[i];
        
        for (i = 0; i < len; i++) {
            string sub = "";
            sub += rev[i];
            sub += rev[i + 1];
            
            if (s.find(sub, 0) != string::npos) return true;
        }

        return false;
    }
};