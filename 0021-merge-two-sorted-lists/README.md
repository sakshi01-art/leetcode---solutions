# 0021 - Merge Two Sorted Lists

## Problem
Merge two sorted linked lists and return it as a sorted list.

The new list should be made by splicing together the nodes of the first two lists.

## Approach
- Compare the current nodes of both linked lists.
- Attach the smaller node to the result list.
- Move the pointer of the list whose node was selected.
- When one list ends, attach the remaining nodes of the other list.

## Complexity
- Time Complexity: O(n + m)
- Space Complexity: O(1)

## Language
C++

## LeetCode
Problem 21 — Merge Two Sorted Lists
