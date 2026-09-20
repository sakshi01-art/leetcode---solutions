# Two Sum

## Approach
Use a hash map to store each number and its index while scanning the array once.

For every value, calculate the required complement:

target - current value

If the complement is already present, the two indices are returned.

## Complexity
- Time: O(n) average
- Space: O(n)

## Example
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
