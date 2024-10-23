

# STATEMENT

In a bustling metropolis, a renowned art museum was preparing for its grand reopening. The museum's curators had meticulously cataloged their extensive collection of paintings, sculptures, and artifacts. However, during the preparations, they discovered that two identical pieces of art had been mistakenly acquired, but the records for these pieces were incomplete or inaccurate.

As the museum's detective, your task is to find these duplicate pieces using only the limited information available in the records. You must examine the records carefully, comparing the artist's name, the title of the piece, and the year of creation.

# YOUR GOAL:

Return an array of size two containing the titles or descriptions of the duplicate pieces, based solely on the information available in the records. These pieces, likely due to errors in acquisition or labeling, are identical and should not be part of the museum's collection.

## Input Format:
2D Array of Strings 

## Output Format:
A single 1D array of strings

### Example Input:

` [["Leonardo da Vinci", "Mona Lisa", 1503], ["Vincent van Gogh", "Starry Night", 1889],["Vincent van Gogh", "Starry Night", 1889],["Edvard Munch", "The Scream", 1893]] `

### Example Output:

`["Starry Night", "Starry Night"]`


- In this example, the two "Starry Night" pieces are identical based on the artist, title, and year. Therefore, they are considered duplicates.

## Constraints:

2 <= n <= 100
nums.length == n + 2
0 <= nums[i] < n
