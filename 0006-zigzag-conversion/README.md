# LeetCode 6 — Zigzag Conversion

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)
![Topic](https://img.shields.io/badge/Topic-String%20%7C%20Simulation-purple)

A C++ solution to **[LeetCode 6: Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/)** using row-by-row simulation.

## 📌 Problem Statement

Given a string `s), write its characters in a zigzag pattern across `numRows` rows, then read the rows from top to bottom to create the converted string.

For example, with `s = "PAYPALISHIRING"` and `numRows = 3`, the pattern is:

```text
P   A   H   N
A P L S I I G
Y   I   R
```

Reading each row from left to right gives `"PAHNAPLSIIGYIR"`.

## 🧪 Examples

### Example 1

**Input**
```text
s = "PAYPALISHIRING", numRows = 3
```

**Output**
```text
"PAHNAPLSIIGYIR"
```

### Example 2

**Input**
```text
s = "PAYPALISHIRING", numRows = 4
```

**Output**
```text
"PINALSIGYAHRPI"
```

Pattern:
```text
P     I    N
A   L S  I G
Y A   H R
P     I
```

### Example 3

**Input**
```text
s = "A", numRows = 1
```

**Output**
```text
"A"
```

## 💡 Approach / Algorithm

We simulate the zigzag movement instead of creating a two-dimensional grid.

1. If `numRows == 1` or `numRows >= s.length()`, return `s` unchanged.
2. Create one string for each row.
3. Start at row `0) and move downward through the rows.
4. When reaching the top or bottom row, reverse the direction.
5. Append each character to its current row.
6. Join all row strings in order and return the result.

## 💻 C++ Solution

See the complete implementation in **[`solution.cpp`](./solution.cpp)**.

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
            return s;
        }

        vector<string> rows(min(numRows, static_cast<int>(s.size())));
        int currentRow = 0;
        int direction = -1;

        for (char ch : s) {
            rows[currentRow] += ch;

            if (currentRow == 0 || currentRow == numRows - 1) {
                direction *= -1;
            }

            currentRow += direction;
        }

        string result;
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};
```

## ⏱️ Complexity Analysis

Let **n** be the length of the input string and **r** be the number of rows.

- **Time Complexity: `O(n)`** — each character is processed once and then collected into the result.
- **Auxiliary Space Complexity: `O(n)`** — the row strings store the characters, and the result string also requires space proportional to the input size.

## 🧠 Key Concepts

- Strings and vectors in C++
- Simulation
- Direction changes at boundary rows
- Edge-case handling

## 🔗 Links

- **Problem:** [LeetCode 6 — Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/)
- **Solution:** [solution.cpp](./solution.cpp)

---

*Part of my LeetCode practice and problem-solving portfolio.*
