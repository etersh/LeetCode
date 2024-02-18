class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
        int i, len = nums.size() - 1;
        if (len == 0) return nums[0] >= target ? 0 : 1; //2 - size 1 array

        auto idx = find(nums.begin(), nums.end(), target);
        if (idx == nums.end()) { //1 - not found
            i = target < nums[len / 2] ? 0 : len / 2; // sets the start of the range (from half or from start)
            for (i; i < len; i++) if (nums[i] > target) return i;

            return nums[i] < target ? len + 1 : len; // 1-2 the biggest num in the array
        }

        else return distance(nums.begin(), idx); //0 - vector iterator to int

        return 0;
        */
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int num = nums[mid];

            if (num == target) return mid;
            else if (num > target) right = mid - 1;
            else if (num < target) left = mid + 1;
        }

        return left;
    }
};