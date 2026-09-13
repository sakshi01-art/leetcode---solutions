class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen(nums1.begin(), nums1.end());
        vector<int> result;
        for (int x : nums2) {
            if (seen.erase(x)) result.push_back(x);
        }
        return result;
    }
};
