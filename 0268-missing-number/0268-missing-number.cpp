class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = true;
        }
        for (int i = 0; i <= nums.size(); i++) {
            if (m[i] == false)
                return i;
        }
        return 0;
    }
};