class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // unordered_map<int, bool> m;
        // for (int i = 0; i < nums.size(); i++) {
        //     m[nums[i]] = true;
        // }
        // for (int i = 0; i <= nums.size(); i++) {
        //     if (m[i] == false)
        //         return i;
        // }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n; i++) {
            if (i == n || nums[i] != i)
                return i;
        }
        return 0;
    }
};