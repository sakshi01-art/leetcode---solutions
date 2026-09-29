# 🏛️ Roman to Integer — LeetCode #13

**Difficulty:** Easy  
**Language:** C++  
**Topic:** Hash Table • String • Math

---

## 📌 Problem

Convert a Roman numeral string into its integer value.

Roman numerals use these symbols:

| Symbol | Value |
|---|---:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

The important rule is that when a smaller value appears before a larger value, the smaller value is subtracted.

Examples:

- `III` → `3`
- `LVIII` → `58`
- `MCMXCIV` → `1994`

---

## 💡 Approach

1. Store every Roman symbol and its value in an `unordered_map`.
2. Traverse the string from left to right.
3. If the current symbol is smaller than the next symbol, subtract it.
4. Otherwise, add it.
5. Return the final sum.

### Example

For `MCMXCIV`:

```text
M  = +1000
C  = -100
M  = +1000
X  = -10
C  = +100
I  = -1
V  = +5

Answer = 1994
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]]) {
                ans -= mp[s[i]];
            } else {
                ans += mp[s[i]];
            }
        }

        return ans;
    }
};
```

---

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** O(1) — the map contains only 7 Roman symbols.

---

## 🔗 LeetCode

[Roman to Integer — LeetCode #13](https://leetcode.com/problems/roman-to-integer/)

---

### 🌱 DSA Practice

Part of my **LeetCode & DSA learning journey** using C++.

**Understand → Code → Test → Optimize → Repeat 🚀**
