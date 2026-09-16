# 🔢 2. Add Two Numbers

> **LeetCode #2 · Medium · Linked List**

Solve addition of two numbers represented by linked lists — without converting the numbers into integers.

---

## 🧩 Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each node contains one digit.

Add the two numbers and return the result as a linked list.

### Example

```text
Input:  l1 = [2,4,3]
        l2 = [5,6,4]

Output: [7,0,8]

Because: 342 + 465 = 807
```

---

## 💡 Approach

We add the digits from left to right in the linked lists while maintaining a **carry**, just like normal addition.

1. Start with both linked-list heads.
2. Add the current digits and the carry.
3. Store `sum % 10` in a new node.
4. Update carry using `sum / 10`.
5. Move to the next nodes.
6. Continue while either list has nodes or a carry remains.

This approach works efficiently even when the numbers contain many digits.

---

## ⏱️ Complexity

| Metric | Complexity |
|---|---|
| Time | **O(max(m, n))** |
| Space | **O(max(m, n))** for the result list |

`m` and `n` are the lengths of the two linked lists.

---

## 💻 Solution

The C++ implementation is available here:

👉 [View C++ Solution](./0002-add-two-numbers.cpp)

---

## 🧠 Concepts Practiced

- Linked List
- Traversal
- Carry handling
- Simulation of arithmetic
- Pointer manipulation

---

## 🚀 DSA Progress

This is **Problem #2** in my DSA / LeetCode practice journey.

**Next:** Keep solving consistently and build stronger problem-solving skills. 🔥

---

<div align="center">

⭐ **Learn • Code • Debug • Improve** ⭐

</div>
