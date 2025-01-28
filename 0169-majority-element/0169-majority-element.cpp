class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 1. whatever code
        int n = nums.size();
        unordered_map<int, int> m;
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;

            if (m[nums[i]] > n / 2) {
                return nums[i];
            }
        }

        return 0;
    }
};