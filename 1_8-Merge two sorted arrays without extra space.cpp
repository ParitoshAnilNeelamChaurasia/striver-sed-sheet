// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        int i = 0, j = 0;

        // Merge nums1 and nums2 into ans, while both have elements to process
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) 
            {
                ans.push_back(nums1[i]);
                i++;
            } 
            else 
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements of nums1 (if any)
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements of nums2 (if any)
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy merged result back into nums1
        for (int k = 0; k < m + n; k++) {
            nums1[k] = ans[k];
        }
    }
};
