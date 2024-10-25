Problem Statement: Strategic Relocation of Jutsu Scrolls
In the Naruto universe, young shinobi are put to the test with a challenging exercise set up by the village. The training grounds feature n chakra-infused pillars, each arranged in a straight line, where each pillar stands at a certain height according to its chakra power level. These heights are given in an integer array height, where height[i] represents the height of the pillar at position i.

The goal of the exercise is to select two pillars that, along with the ground, can form a two-dimensional container capable of holding the maximum possible amount of oil between them. The container’s effective area depends on both the heights of the two pillars and the distance between them, forming a bounded region where oil can collect. The challenge is to find the pair of pillars that maximize this area, making them the optimal choice for holding oil.

Your task is to help the shinobi determine the maximum possible amount of oil that can be contained within any such container formed between two pillars.


Input Format:
size_of_the_array
heightArray[0] heightArray[1] ..... HeightArray[size_of_the_array-1]
Output Format:
area

Constraints:
2 <= size_of_the_array <= 105
0 <= heightArray[i] <= 104

Sample Input:
5
3 5 6 9 4

Sample Output:
12

Link: https://leetcode.com/problems/container-with-most-water/description/
