# 📊 4. Median of Two Sorted Arrays

> **LeetCode #4 · Hard · Array · Binary Search · Divide & Conquer**

<div align="center">

**Find the median of two sorted arrays in `O(log(min(m, n)))` time.** 🚀

</div>

---

## 🧩 Problem

Given two sorted arrays `nums1` and `nums2`, return the **median** of the combined sorted data.

The solution should run in **O(log (m + n))** time.

### Example 1

```text
Input:  nums1 = [1,3], nums2 = [2]
Output: 2.00000
```

### Example 2

```text
Input:  nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
```

---

## 💡 Approach — Binary Search Partition

Instead of actually merging both arrays, we perform binary search on the **smaller array**.

We choose partition positions so that:

- Every value on the left side is `<=` every value on the right side.
- The left half contains the correct number of elements.

Once the partition is valid, the median can be calculated directly from the boundary values.

### 🔎 Key Idea

```text
nums1:  [ left1 | right1 ]
nums2:  [ left2 | right2 ]

Valid partition:
left1 <= right2
left2 <= right1
```

This avoids creating a merged array and keeps the algorithm logarithmic.

---

## ⏱️ Complexity

| Metric | Complexity |
|---|---|
| Time | **O(log(min(m, n)))** |
| Space | **O(1)** |

---

## 💻 C++ Solution

See the implementation here:

[`0004-median-of-two-sorted-arrays.cpp`](./0004-median-of-two-sorted-arrays.cpp)

---

## 🧠 Concepts Practiced

- 🔍 Binary Search
- 📦 Arrays
- ✂️ Partitioning
- ⚡ Divide & Conquer
- 📈 Time & Space Complexity

---

## 🎯 DSA Progress

**Problem #4 completed** → Practicing advanced array and binary-search techniques.

```text
Arrays          ██████████  Building
Binary Search   ████████░░  Improving
Problem Solving ████████░░  Improving
```

---

<div align="center">

### 🌱 Learn • Code • Debug • Improve

**Consistency turns difficult problems into familiar patterns. 💻🔥**

</div>
