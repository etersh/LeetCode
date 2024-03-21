class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 1 && nums1.size() == 1) m++;
        //sort(nums1.begin(), nums1.end());
        //int start = distance(nums1.begin(), find(nums1.begin(), nums1.end(), 0));
        int idx = 0;

        for (int i = m; i < nums1.size(); i++) {
            nums1[i] = nums2[idx++];
        }

        sort(nums1.begin(), nums1.end());
    }
};