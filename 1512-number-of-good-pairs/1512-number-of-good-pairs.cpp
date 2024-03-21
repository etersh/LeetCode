class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) cnt++;
            }
        }
        return cnt;
    }
};