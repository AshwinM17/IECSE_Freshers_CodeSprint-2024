### Statement:
In the Star Wars galaxy, young Jedi are required to complete a rigorous trial to ascend the Stairway to the Force. The staircase has n steps, and each Jedi must strategically decide how to ascend the steps, using their knowledge of the Force to move efficiently.

At each step `i`, a Jedi can use their connection to the Force to:

Leap forward by `i+1` steps using the Force Push technique, or
Dash ahead by `i+2` steps using the Force Dash technique (if it’s a valid move).
The Jedi who reaches the top of the staircase in the least number of moves will be crowned the Master of the Force. However, not all paths are viable, and it’s possible that a Jedi might not be able to reach the top at all.

Your task is to determine the minimum number of moves required for a Jedi to reach the top of the staircase (i.e., step n), starting from step 1. If it’s not possible to reach step n, return `-1`.

### Input format:
- The first line contains the number `n`, which is the number of steps in the staircase.
- The Jedi can make only valid moves as per the Force techniques.

### Output format:
Return the minimum number of moves required to reach the top of the staircase, or `-1` if it’s impossible.

### Constraints:
`1 <= n <= 45`

### Example:
## Input 1:
```
n=5
```
## Output 1:
```
3
```
## Explanation:

- Starting from step 1:
- Use Force Push from step 1 to step 2.
- Use Force Dash from step 2 to step 4.
- Use Force Push from step 4 to step 5.

### Link:
https://leetcode.com/problems/climbing-stairs/description/

### Edited by:
Sandeep Balaji
