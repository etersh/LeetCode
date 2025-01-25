class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> chk;
        for (int i = 0; i < nums.size(); i++) {
            if (chk[nums[i]] == 0)
                chk[nums[i]] = 1;
            else
                chk[nums[i]]--;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (chk[nums[i]] == 1)
                return nums[i];
        }
        return 0;
    }
};