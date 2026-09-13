class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, votes = 0;
        for (int x : nums) {
            if (votes == 0) candidate = x;
            votes += (x == candidate) ? 1 : -1;
        }
        return candidate;
    }
};
