class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        //2-1. reverse
        long long y = x;
        long long rev = 0;
        while (y > 0) {
            rev = rev * 10 + y % 10;
            y /= 10;
        }

        //2-2. check
        while (x > 0) {
            if (x % 10 != rev % 10) return false;
            rev /= 10;
            x /= 10;
        }

        return true;
    }
};