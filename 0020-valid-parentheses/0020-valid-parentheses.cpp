
class Solution {
public:
    //[()]
    bool isValid(string s) {
        if (s.length() == 1) return false;
        stack<char>st;
        int cnt = 0, n;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else if (st.empty()) return false;
            else if (!st.empty()) {
                if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                    cnt++;
                }
                else return false;
            }
        }

        //n = s.size() / 2 + s.size() % 2;
    
        //return (cnt == n && st.empty());
        return  (st.empty());
    }
};