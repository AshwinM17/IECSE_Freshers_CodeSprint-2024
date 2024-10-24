Spiderman, while facing Vulture, came across a problem. He couldn't reach the height of Vulture's flight path from all the buildings in Manhattan. The only buildings capable of doing so, are part of the city's skyline.

Thus he wants to map out the city skyline using simple xy coordinates for each.

Each building is represented as follows:
[starting point on x-axis, ending point on x-axis, height]

Given an array of buildings, find the "key points" where the height of the skyline changes and give the output in the form of [x,y] coordinates.
![image](https://github.com/user-attachments/assets/7213a6bd-ae76-46bc-a344-78c3d4da6fba)

Note: Two successive coordinates should not have the same x OR y values.

Example Input:
5
2 9 10
3 7 15
5 12 12
15 20 10
19 24 8

Example Output:
[[2,10],[3,15],[7,12],[12,0],[15,10],[20,8],[24,0]]
