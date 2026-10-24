# 🚀 LeetCode Solutions

<div align="center">

### 🧩 DSA Practice • C++ • Problem Solving

**Learn → Solve → Optimize → Repeat 🔥**

</div>

---

## 👩‍💻 About This Repository

This repository tracks my ongoing **LeetCode and DSA learning journey**. Solutions are organized by problem and topic so the repo can grow into a clean revision and interview-practice reference.

- 🎓 BTech CSE student
- 💻 Practicing C++ & DSA
- 🧠 Strengthening algorithms and problem solving
- 🎯 Preparing for coding interviews through consistent practice

---

## 🎨 DSA Journey Visual

<p align="center">
  <img src="./assets/project-draw.svg" alt="LeetCode DSA practice workflow" width="100%" />
</p>

> **Visual:** Read → plan → code → test → optimize.

---

## 📊 Progress

| Difficulty | Solved |
|---|---:|
| 🟢 Easy | 19 |
| 🟡 Medium | 1 |
| 🔴 Hard | 0 |
| **Total** | **20** |

> Progress changes as new solutions are added.

---

## 🧠 Topics

`Arrays` `Hash Table` `Strings` `Stack` `Two Pointers` `Binary Search` `Linked List` `Dynamic Programming` `Sorting` `Math`

---

## 📝 Problems Tracked

| # | Problem | Main Concept |
|---:|---|---|
| 1 | Two Sum | Hash Table |
| 7 | [Reverse Integer](#leetcode-7-reverse-integer) | Math + Overflow Handling |
| 9 | Palindrome Number | Math |
| 13 | Roman to Integer | Hash Table + String |
| 20 | Valid Parentheses | Stack |
| 53 | Maximum Subarray | Kadane's Algorithm |
| 70 | Climbing Stairs | Dynamic Programming |
| 88 | Merge Sorted Array | Two Pointers |
| 121 | Best Time to Buy and Sell Stock | Greedy |
| 125 | Valid Palindrome | Two Pointers |
| 141 | Linked List Cycle | Fast & Slow Pointers |
| 169 | Majority Element | Boyer-Moore Voting |
| 206 | Reverse Linked List | Linked List |
| 217 | Contains Duplicate | Hash Set |
| 242 | Valid Anagram | Frequency Counting |
| 283 | Move Zeroes | Two Pointers |
| 344 | Reverse String | Two Pointers |
| 347 | Top K Frequent Elements | Hash Map + Sorting |
| 349 | Intersection of Two Arrays | Hash Set |
| 387 | First Unique Character | Frequency Counting |
| 704 | Binary Search | Binary Search |


---

## 🧩 Featured Solution

### LeetCode #7 — Reverse Integer

**Difficulty:** Medium  
**Topic:** Math, Integer Manipulation, Overflow Handling

**Problem:** Reverse the digits of a signed 32-bit integer. If the reversed value falls outside the signed 32-bit range, return `0`.

#### C++ Solution

```cpp
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check overflow before multiplying rev by 10.
            if (rev > INT_MAX / 10 ||
                (rev == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            if (rev < INT_MIN / 10 ||
                (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            rev = rev * 10 + digit;
        }

        return rev;
    }
};
```

#### Examples

| Input | Output |
|---:|---:|
| `123` | `321` |
| `-123` | `-321` |
| `120` | `21` |
| `1534236469` | `0` (overflow) |

#### Approach

1. Extract the last digit using `x % 10`.
2. Remove that digit using `x /= 10`.
3. Append the digit to the reversed number with `rev = rev * 10 + digit`.
4. Check the 32-bit integer boundaries **before** updating `rev`; return `0` if overflow would occur.

**Time Complexity:** (O(\log_{10}|x|)), because each loop processes one digit.  
**Space Complexity:** (O(1)), because only a fixed number of variables are used.

**Folder:** [0007-reverse-integer](https://github.com/sakshi01-art/leetcode---solutions/tree/main/0007-reverse-integer)  
**LeetCode:** [Reverse Integer](https://leetcode.com/problems/reverse-integer/)


---

## 🗂️ Repository Structure

```text
leetcode---solutions/
├── Arrays/
├── Strings/
├── Linked-List/
├── Stack/
├── Binary-Search/
├── Dynamic-Programming/
├── 0013-roman-to-integer/
└── README.md
```

---

## 🗺️ DSA Roadmap

- [x] Arrays
- [x] Hash Table
- [x] Strings
- [x] Two Pointers
- [x] Stack
- [x] Linked List
- [x] Binary Search
- [x] Dynamic Programming
- [ ] Trees
- [ ] Graphs
- [ ] Advanced Dynamic Programming

---

## 🔥 Latest Practice Update — 23 October 2026

- 🧩 Added documentation for **Reverse Integer — LeetCode #7** with a C++ solution.
- 🛡️ Included 32-bit overflow checks and complexity analysis.
- 📊 Updated the tracked problem count to **20 solutions** (19 Easy, 1 Medium).
- 🚀 Continuing consistent C++ and DSA practice.

### 📌 Current Practice Focus

```text
Arrays → Hashing → Strings → Two Pointers → Stack → Linked List → Binary Search → Trees → Graphs
```

---

<div align="center">

**🌱 Consistency > Speed**

⭐ Keep learning. Keep solving. Keep improving.

</div>

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0004-median-of-two-sorted-arrays) |
| [0014-longest-common-prefix](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0014-longest-common-prefix) |
## Binary Search
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0004-median-of-two-sorted-arrays) |
## Divide and Conquer
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0004-median-of-two-sorted-arrays) |
## Math
|  |
| ------- |
| [0007-reverse-integer](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0007-reverse-integer) |
| [0009-palindrome-number](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0009-palindrome-number) |
| [0013-roman-to-integer](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0013-roman-to-integer) |
## Hash Table
|  |
| ------- |
| [0013-roman-to-integer](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0013-roman-to-integer) |
## String
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0005-longest-palindromic-substring) |
| [0006-zigzag-conversion](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0006-zigzag-conversion) |
| [0008-string-to-integer-atoi](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0008-string-to-integer-atoi) |
| [0013-roman-to-integer](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0014-longest-common-prefix) |
| [0020-valid-parentheses](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0020-valid-parentheses) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0014-longest-common-prefix) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0020-valid-parentheses) |
## Bracket Sequences
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0020-valid-parentheses) |
## Two Pointers
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0005-longest-palindromic-substring) |
## Dynamic Programming
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0005-longest-palindromic-substring) |
## Manacher
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/sakshi01-art/leetcode---solutions/tree/master/0005-longest-palindromic-substring) |
<!---LeetCode Topics End-->

---

## 📌 Next Practice Targets

```text
Trees → Graphs → Dynamic Programming → Advanced DSA
```

**Practice cycle:** Understand → Plan → Code → Test → Analyze Complexity → Revise 🔁
