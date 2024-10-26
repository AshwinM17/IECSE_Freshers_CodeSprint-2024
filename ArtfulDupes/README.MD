

# STATEMENT

-----

In a bustling metropolis, a renowned art museum was preparing for its grand reopening. The museum's curators had meticulously cataloged their extensive collection of paintings, sculptures, and artifacts. However, during the preparations, they discovered that two identical pieces of art had been mistakenly acquired, but the records for these pieces were incomplete or inaccurate.

As the museum's detective, your task is to find these duplicate pieces using only the limited information available in the records. You must examine the records carefully, comparing the artist's name, the title of the piece, and the year of creation.

# YOUR GOAL

------

- Return the number of the duplicate pieces, based solely on the information available in the records. 
- These pieces, likely due to errors in acquisition or labeling, are identical and should not be part of the museum's collection.
- If no duplicates are found display 0.

## Input Format:
-------
- First line is the number of creations present
- In the second line there are 3 1D Array of name of artist(String),title of their painting(String) and year they were created(int). 
- Remember all three have to match for it to be considered as a duplicate.

## Output Format:
-----
- number of the duplicated titles(int)

### Examples
---

*Example 1:*
```
Input 1:

4
Pablo_Picasso
Edvard_Munch
Edvard_Munch
Pablo_Picasso
Night_Watch
The_Scream
The_Scream
Night_Watch
1937
1893
1893
1642

Output 1:

1

```
**Explanation for example 1:**

-  the two "The Scream" pieces are identical based on the artist, title, and year. Therefore, they are considered duplicates.

*Example 2:*
```

Input 2:

4
Michelangelo
Leonardo_da_Vinci
Leonardo_da_Vinci
Michelangelo
David
Last_Supper
Last_Supper
David
1501
1495
1495
1501


Output 2:

2

```

*Example 3:*
```

Input 3:

4
Salvador_Dalí
Johannes_Vermeer
Johannes_Vermeer
Jackson_Pollock
The_Persistence_of_Memory
Girl_with_a_Pearl_Earring
Girl_with_a_Pearl_Earring
Number_1,_1950_(Lavender_Mist)
1931
1665
1665
1950

Output 3:

1

```

## Constraints:

`2 <= n <= 100`
`nums.length == n + 2`
`0 <= nums[i] < n`

## Link
- <a href="https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/">Digitville</a><br>


## Edited by
Dhruv Saraogi
