# 🔗 Valid Parentheses — LeetCode #20

**Difficulty:** Easy  
**Language:** C++  
**Topic:** Stack • String

---

## 📌 Problem

Given a string containing only `()`, `{}`, and `[]`, determine whether the brackets are **valid**.

A string is valid when:

1. Every opening bracket has the same type of closing bracket.
2. Brackets are closed in the correct order.
3. Every closing bracket has a corresponding opening bracket.

### Examples

- `"()"` → `true`
- `"()[]{}"` → `true`
- `"(]"` → `false`
- `"([])"` → `true`
- `"([)]"` → `false`

---

## 💡 Approach

The natural data structure for this problem is a **Stack**.

1. Traverse the string from left to right.
2. When an opening bracket is found, push it onto the stack.
3. When a closing bracket is found:
   - Check whether the stack is empty.
   - Check whether the top opening bracket matches it.
   - If it does not match, return `false`.
4. Pop the matching opening bracket.
5. After processing the complete string, the stack must be empty.

### Example Walkthrough

For:

```text
"([])"
```

Stack operations:

```text
(  → push
[  → push
]  → matches [ → pop
)  → matches ( → pop
```

Stack is empty → **true** ✅

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty())
                    return false;

                char top = st.top();

                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
```

---

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** O(n) in the worst case.

---

## 🔗 LeetCode

[Valid Parentheses — LeetCode #20](https://leetcode.com/problems/valid-parentheses/)

---

### 🌱 DSA Practice

Part of my **LeetCode & DSA learning journey** using C++.

**Understand → Code → Test → Optimize → Repeat 🚀**
