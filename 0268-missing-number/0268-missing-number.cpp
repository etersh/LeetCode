class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // 1. O(n), O(n)
        // unordered_map<int, bool> m;
        // for (int i = 0; i < nums.size(); i++) {
        //     m[nums[i]] = true;
        // }
        // for (int i = 0; i <= nums.size(); i++) {
        //     if (m[i] == false)
        //         return i;
        // }

        // 2. O(n log n), O(1)
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i <= n; i++) {
        //     if (i == n || nums[i] != i)
        //         return i;
        // }

        // 3. O(n), o(1)
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        int have = 0;
        for (int i = 0; i < n; i++) {
            have += nums[i];
        }
        return sum - have;
    }
};