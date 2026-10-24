# LeetCode 8 — String to Integer (atoi)

<p align="center">
  <b>C++ • String Processing • Integer Conversion • Overflow Handling</b>
</p>

---

## Problem Statement

Implement `myAtoi(string s)` to convert a string into a signed 32-bit integer.

The function must:
1. Ignore leading spaces.
2. Read an optional `+` or `-` sign.
3. Convert consecutive digits until a non-digit character or the end of the string.
4. Return `0` if no digits are found.
5. Clamp values outside the signed 32-bit range to `INT_MIN` or `INT_MAX`.

## C++ Solution

See [solution.cpp](./solution.cpp) for the complete implementation.

```cpp
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        while (i < n && s[i] == ' ') {
            i++;
        }

        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        long long num = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            num = num * 10 + digit;

            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return static_cast<int>(num * sign);
    }
};
```

## Examples

| Input | Output | Explanation |
|---|---:|---|
| `"42"` | `42` | Converts digits directly |
| `"   -42"` | `-42` | Skips spaces and preserves the minus sign |
| `"4193 with words"` | `4193` | Stops at the first non-digit |
| `"words and 987"` | `0` | No digits at the start after optional sign |
| `"91283472332"` | `2147483647` | Clamped to `INT_MAX` |

## Approach

- Skip leading spaces.
- Determine the sign, if present.
- Read digits one at a time and build the number.
- Check the 32-bit limits during conversion and clamp immediately when the value exceeds them.
- Stop at the first non-digit character.

## Complexity Analysis

- **Time Complexity:** `O(n)`, where `n` is the length of the input string.
- **Space Complexity:** `O(1)`, using a fixed number of variables.

## Links

- [LeetCode Problem — String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)
- [Main LeetCode solutions repository](https://github.com/sakshi01-art/leetcode---solutions)
- [This solution folder](https://github.com/sakshi01-art/leetcode---solutions/tree/main/0008-string-to-integer-atoi)
