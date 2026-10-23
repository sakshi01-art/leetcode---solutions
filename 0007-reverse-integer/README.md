# LeetCode 7 — Reverse Integer

<p align="center">
  <b>LeetCode • C++ • Math • Overflow Handling</b><br/>
  A clean, interview-ready solution with 32-bit overflow checks.
</p>

---

## Problem Statement

Given a signed 32-bit integer `x`, reverse its digits. If reversing the integer causes the value to go outside the signed 32-bit range `[-2³¹, 2³¹ - 1]`, return `0`.

## Examples

| Input | Output | Explanation |
|---|---:|---|
| `123` | `321` | Digits are reversed |
| `-123` | `-321` | Negative sign is preserved |
| `120` | `21` | Leading zero is dropped |
| `1534236469` | `0` | Reversed number overflows |

## Approach

1. Get the last digit with `x % 10`.
2. Remove the last digit with `x /= 10`.
3. Append the digit to the result: `rev = rev * 10 + digit`.
4. **Before updating the result**, compare it against `INT_MAX / 10` and `INT_MIN / 10`. Return `0` if the next operation would overflow.

## C++ Solution

See **[solution.cpp](./solution.cpp)** for the complete implementation.

## Complexity Analysis

- **Time Complexity:** `O(log₁₀ |x|)` — each iteration processes one digit.
- **Space Complexity:** `O(1)` — only a constant number of variables are used.

## Key Learning

Checking integer boundaries *before* multiplying by 10 prevents overflow without requiring a 64-bit integer.

## Links

- [Open problem on LeetCode](https://leetcode.com/problems/reverse-integer/)
- [Browse all solutions](https://github.com/sakshi01-art/leetcode---solutions)
- [View this solution folder](https://github.com/sakshi01-art/leetcode---solutions/tree/main/0007-reverse-integer)
