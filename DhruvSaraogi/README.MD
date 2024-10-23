

# STATEMENT

-----

In a bustling metropolis, a renowned art museum was preparing for its grand reopening. The museum's curators had meticulously cataloged their extensive collection of paintings, sculptures, and artifacts. However, during the preparations, they discovered that two identical pieces of art had been mistakenly acquired, but the records for these pieces were incomplete or inaccurate.

As the museum's detective, your task is to find these duplicate pieces using only the limited information available in the records. You must examine the records carefully, comparing the artist's name, the title of the piece, and the year of creation.

# YOUR GOAL

------

- Return an array containing the titles or descriptions of the duplicate pieces, based solely on the information available in the records. 
- These pieces, likely due to errors in acquisition or labeling, are identical and should not be part of the museum's collection.

## Input Format:
-------
- 3 1D Array of Strings of name of artist,title of their painting and year they were created. 
- Remember all three have to match for it to be considered as a duplicate.

## Output Format:
-----
- A single 1D array of strings of the duplicated titles

### Examples
---

*Example 1:*
```
Input 1:

`['Pablo Picasso','Edvard Munch','Edvard Munch','Pablo Picasso'],['Night Watch','The Scream','The Scream','Night Watch'],[1937,1893,1893,1642]`

Output 1:

`['The Scream','The Scream']`

```
**Explanation for example 1:**

-  the two "The Scream" pieces are identical based on the artist, title, and year. Therefore, they are considered duplicates.

*Example 2:*
```

Input 2:

`['Michelangelo','Leonardo da Vinci','Leonardo da Vinci','Michelangelo'],['David','Last Supper','Last Supper','David'],[1501,1495,1495,1501]`

Output 2:

`['Last Supper','Last Supper','David','David']`

```

*Example 3:*
```

Input 3:

`['Salvador Dalí','Johannes Vermeer','Johannes Vermeer','Jackson Pollock'],['The Persistence of Memory,' Girl with a Pearl Earring', 'Girl with a Pearl Earring','Number 1, 1950 (Lavender Mist)'],[1931,1665,1665,1950]`

Output 3:

`['Girl with a Pearl Earring','Girl with a Pearl Earring']`

```

## Constraints:

`2 <= n <= 100`
`nums.length == n + 2`
`0 <= nums[i] < n`

## Link
https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

## Edited by
Dhruv Saraogi
