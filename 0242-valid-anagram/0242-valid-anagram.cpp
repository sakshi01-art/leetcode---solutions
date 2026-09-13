class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        array<int, 26> count{};
        for (char c : s) ++count[c - 'a'];
        for (char c : t) --count[c - 'a'];
        for (int x : count) if (x != 0) return false;
        return true;
    }
};
