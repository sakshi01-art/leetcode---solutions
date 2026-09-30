# 🔤 Longest Common Prefix — LeetCode #14

**Difficulty:** Easy  
**Language:** C++  
**Topic:** String

---

## 📌 Problem

Given an array of strings, find the **longest common prefix** shared by all strings.

If there is no common prefix, return an empty string `""`.

### Examples

- `["flower", "flow", "flight"]` → `"fl"`
- `["dog", "racecar", "car"]` → `""`

---

## 💡 Approach

This solution uses the first string as the initial prefix.

1. Store the first string in `prefix`.
2. Compare it with every remaining string.
3. Check characters from left to right while they are equal.
4. Shorten `prefix` to the matching part.
5. If the prefix becomes empty, return `""`.
6. After all strings are processed, return the remaining prefix.

### Example Walkthrough

For:

```text
["flower", "flow", "flight"]
```

The common prefix is gradually reduced:

```text
flower → flow → "fl"
```

So the answer is:

```text
"fl"
```

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j < prefix.length() &&
                   j < strs[i].length() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            prefix = prefix.substr(0, j);

            if (prefix == "")
                return "";
        }

        return prefix;
    }
};
```

---

## ⏱️ Complexity

- **Time:** O(n × m), where `n` is the number of strings and `m` is the length of the common prefix.
- **Space:** O(m) for the prefix string.

---

## 🔗 LeetCode

[Longest Common Prefix — LeetCode #14](https://leetcode.com/problems/longest-common-prefix/)

---

### 🌱 DSA Practice

Part of my **LeetCode & DSA learning journey** using C++.

**Understand → Code → Test → Optimize → Repeat 🚀**
