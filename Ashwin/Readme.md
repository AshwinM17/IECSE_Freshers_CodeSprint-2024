### Statement

In the magical world of Harry Potter, Professor Severus Snape has been tasked with collecting the <b>unique</b> scores of "n" students' achievements in a mystical competition inside an array named **score**. To bring order to the ranking, Snape awards the students as follows:

&nbsp;&nbsp;&nbsp;The student with the highest score is honored with the "Gold Medal."<br>
&nbsp;&nbsp;&nbsp;The second-highest scorer receives the prestigious "Silver Medal."<br>
&nbsp;&nbsp;&nbsp;The student in third place is awarded the coveted "Bronze Medal."


For the rest of them ranks are based on their placements, starting from 4 and going to n.
Now, Snape must use his formidable skills in potions and mathematics to determine the ranks and create a String array answer of size n where "answer[i]" reveals the rank of i<sup>th</sup> student, ensuring they receive their rightful recognition in the wizarding world

### Input Format

The first line consists of a number ***n*** which is the number of students whose rank has to be calculated.The next ***n*** integers are the **unique** scores scored by each of them.

### Output Format

An array holding Strings holding the ranks and medals(if won)by the various students.
### Constraints

&nbsp;&nbsp;&nbsp;n=length of scores array<br>
&nbsp;&nbsp;&nbsp;1 <= n <= 10<sup>4</sup><br>
&nbsp;&nbsp;&nbsp;0<= score[i]<=10<sup>6</sup>

### Sample Input 1
```
n=5
score = [5,4,3,2,1]
```
### Sample Output 1
```
["Gold Medal","Silver Medal","Bronze Medal","4","5"]
```

### Sample Input 2
```
n=5
score = [10,3,8,9,4]
```
### Sample Output 2
```
["Gold Medal","5","Bronze Medal","Silver Medal","4"]
```

### Link

https://leetcode.com/problems/relative-ranks/description/

### Edited By
Ashwin Mittal
