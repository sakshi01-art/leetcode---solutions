# 🧩 Two Sum

**Difficulty:** 🟢 Easy  
**Topics:** Array · Hash Table  
**Language:** C++

## 💡 Approach

Instead of checking every possible pair, use a hash table to remember numbers that have already been visited.

For each number `nums[i]`:

1. Calculate the required `complement = target - nums[i]`.
2. Check whether that complement is already stored.
3. If it exists, return the stored index and the current index.
4. Otherwise, store the current number with its index.

This lets us solve the problem in one pass on average.

## 🔎 Example

```text
Input:  nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
```

Because `2 + 7 = 9`.

## ⏱️ Complexity

- **Time:** O(n) average
- **Space:** O(n)

## 🧠 Key Idea

**Store what you have seen, then search for the complement.**

This improves on the brute-force pair-checking approach, which takes O(n²) time.

## 🔗 Solution

[View the C++ solution](./0001-two-sum.cpp)
