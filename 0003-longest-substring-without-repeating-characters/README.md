# 🔤 3. Longest Substring Without Repeating Characters

> **LeetCode #3 · Medium · String / Sliding Window**

## 📌 Problem

Given a string `s`, find the length of the **longest substring without repeating characters**.

### Example

```text
Input:  s = "abcabcbb"
Output: 3
```

The longest substring is `"abc"`, so the answer is `3`.

Other examples:

- `"bbbbb"` → `1`
- `"pwwkew"` → `3`

## 💡 Approach — Sliding Window

This solution uses a **sliding window** with two pointers:

1. `left` marks the beginning of the current valid substring.
2. `right` moves through the string one character at a time.
3. `last[c]` stores the most recent index where character `c` appeared.
4. If the character was already inside the current window, move `left` just after its previous position.
5. Update the maximum window length after each step.

This avoids repeatedly checking every substring and gives an efficient linear-time solution.

## ⏱️ Complexity

| Complexity | Value |
|---|---|
| Time | `O(n)` |
| Space | `O(1)` for the fixed 256-character table |

## 💻 C++ Solution

[View the C++ solution →](./0003-longest-substring-without-repeating-characters.cpp)

## 🧠 Concepts Practiced

- Strings
- Sliding Window
- Two Pointers
- Arrays / Frequency Tracking
- Hashing-style index tracking
- Time & Space Complexity

## 📈 DSA Progress

Building DSA step by step through LeetCode problems — focusing on understanding the approach, writing clean C++, and improving problem-solving skills.

<div align="center">

**Learn • Code • Debug • Improve 🚀**

</div>
