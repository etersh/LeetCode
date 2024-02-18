class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        unordered_map<int, int>m;
        vector<int>orig = nums;
        
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++; //cnt num
            if (m[nums[i]] > 1) {
                nums.erase(find(nums.begin(), nums.end(), nums[i])); //?
                i--;
            }
        }
        */
        
        //if there's a new num, just place it at the second and goes on++
        int idx = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[idx++] = nums[i];
            }
        }
        //0- size:3 112
        //1- 3->2 12
        //2- ?
        //-> size : nv -> 
        //return m.size();
        return idx;
    }
};