class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // // 1. brute force (n2)
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};

        // // 2. reducing time complexitity
        // for (int i = 0; i < nums.size(); i++) {
        //     int need = target - nums[i];
        //     auto found = find(nums.begin(), nums.end(), need);
        //     if (found != nums.end()) {
        //         int idx = distance(nums.begin(), found);
        //         if (idx != i)
        //             return {i, idx};
        //     }
        // }
        // return {};

        // 3. using unordered_map
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (m.count(need)) {
                auto idx = m.find(need);
                if (idx->second != i)
                    return {i, idx->second};
            }

            m[nums[i]] = i;
        }
        return {};
    }
};