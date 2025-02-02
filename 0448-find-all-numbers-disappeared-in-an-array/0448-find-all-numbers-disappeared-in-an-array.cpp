class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        unordered_map<int, bool> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]] = true;
        }
        for (int i = 1; i <= n; i++) {
            if (m[i] == false) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};