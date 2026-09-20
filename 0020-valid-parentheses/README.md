# 20. Valid Parentheses

## Approach

Use a stack because the most recently opened bracket must be the first bracket matched.

1. Push every opening bracket.
2. For a closing bracket, return false if the stack is empty.
3. Compare the closing bracket with the stack top.
4. Pop the matching opening bracket.
5. At the end, the stack must be empty.

## Complexity

- Time: **O(n)**
- Space: **O(n)** in the worst case

## Example

Input: `()[]{}`

The brackets are matched in LIFO order, so the result is `true`.

## Learning Point

This problem is a good introduction to the **stack** data structure and the LIFO (Last In, First Out) principle.