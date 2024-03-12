class Solution {
public:
    string addBinary(string a, string b) {
        string ret = "";
        int add = 0;
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || add) {
            if (i >= 0) {
                add += a[i--] - '0';
            }
            if (j >= 0) {
                add += b[j--] - '0';
            }
            
            ret += add % 2 + '0'; //calculate the remainder and add to string
            add /= 2; //check if it's 2, and carry 1 if it is
       }

        reverse(ret.begin(), ret.end());

        return ret;
    }
};