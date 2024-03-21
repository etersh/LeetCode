class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int, int>m;

        for (int val : nums) m[val]++;

        for (auto& p : m){
            int times = p.second;
            cnt += times * (times - 1) / 2;
        }

        return cnt;
    }
};