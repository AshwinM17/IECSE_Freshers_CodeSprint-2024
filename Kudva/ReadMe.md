# This is Kudva's very stupid question

---

## Statement
You are given an array `arr` of size `n + 1` containing numbers in the range `[1, n]`. The array contains `n + 1` integers where every number between `1` and `n` appears at least once, and one number appears **exactly twice**. Your task is to find and return the duplicated number.

### Input Format
- The first line contains a single integer `n` (1 ≤ n ≤ \(10^5\)), which represents the number of unique integers in the range `[1, n]`.
- The second line contains `n + 1` integers, where each integer is in the range `[1, n]`.

### Output Format
- Output a single integer, which is the duplicated number in the array.

### Constraints
- The solution must run in \( O(n) \) time.
- The solution should use \( O(1) \) additional space, excluding the input.
- **Cycle detection techniques are not allowed.**

### Examples

**Example 1:**
```
Input:
4
1 3 4 2 2

Output:
2
```

**Example 2:**
```
Input:
5
1 1 2 3 4 5

Output:
1
```

**Example 3:**
```
Input:
6
5 4 3 2 1 3

Output:
3
```

--- 
