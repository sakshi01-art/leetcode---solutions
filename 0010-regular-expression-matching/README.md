# 0010. Regular Expression Matching

[![LeetCode](https://img.shields.io/badge/LeetCode-10-orange?logo=leetcode)](https://leetcode.com/problems/regular-expression-matching/)
![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)
![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue)

## Problem Statement

Given an input string `s` and a pattern `p`, implement regular expression matching with support for:

- `.` — matches any single character.
- `*` — matches zero or more occurrences of the preceding element.

The match must cover the **entire** input string, not just a substring.

## Examples

| Input | Output | Explanation |
|---|---|---|
| `s = "aa", p = "a"` | `false` | The pattern does not cover both characters. |
| `s = "aa", p = "a*"` | `true` | `a*` can match two occurrences of `a`. |
| `s = "ab", p = ".*"` | `true` | `.*` can match any sequence of characters. |

## Approach: Dynamic Programming

Use a 2D DP table where `dp[i][j]` is true when the first `i` characters of `s` match the first `j` characters of `p`.

### State transitions

1. If the current pattern character is equal to the current string character, or it is `.`, use the diagonal state: `dp[i][j] = dp[i-1][j-1]`.
2. If the current pattern character is `*`:
   - **Zero occurrences:** ignore the preceding pattern element and use `dp[i][j-2]`.
   - **One or more occurrences:** if the preceding pattern element matches the current string character, use `dp[i-1][j]`.

Initialize `dp[0][0] = true`. Also initialize empty-string matches for patterns such as `a*` and `a*b*`.

## C++ Solution

See [`solution.cpp`](./solution.cpp).

## Complexity Analysis

Let `n` be the length of `s` and `m` be the length of `p`.

- **Time Complexity:** `O(n × m)` — each DP cell is calculated once.
- **Space Complexity:** `O(n × m)` — the DP table stores `(n + 1) × (m + 1)` states.

## Key Concepts

- Dynamic Programming
- String Matching
- Pattern Matching
- 2D DP

## LeetCode

[Problem 10 — Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)
