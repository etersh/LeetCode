class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) nums[idx++] = nums[i];
        }
        return idx;
        */
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        //uses remove() to shift all the unequal elements
        //and erase() them all at once by setting ranges
        return nums.size();
    }
};