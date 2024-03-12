class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;

        int ret = 1, prev = 3, preprev = 2;

        for (int i = 4; i <= n; i++) {
            ret = prev + preprev;
            preprev = prev;
            prev = ret;
        }

        return ret;
    }
};