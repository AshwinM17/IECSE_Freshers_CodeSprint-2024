Problem Statement: Strategic Relocation of Jutsu Scrolls
In the hidden village of Konoha, the Hokage has tasked you with the critical mission of relocating powerful ancient jutsu scrolls from the Scroll Storage Room to a Secret Vault. The scrolls are stacked in the Scroll Storage Room, with the weakest jutsu scroll on top and the most dangerous scroll at the bottom.

To assist you, three elite ninjas—Kakashi, Shikamaru, and Sakura—will use their teleportation jutsu to transfer the scrolls between the following rooms:

Scroll Storage Room (where the scrolls are initially stacked),
Sealing Room, and
Secret Vault (the final destination for the scrolls).
Rules of Engagement:
Teleportation Capability: Each ninja can teleport the scroll that is currently on top of the stack from their room to another room. They cannot teleport any scroll that is not on top.
Chakra Safety Protocol: A scroll containing a stronger jutsu (higher danger level) must never be placed on top of a scroll with a weaker jutsu. Violating this rule will result in the destruction of the weaker scroll.
Goal: All scrolls must be safely moved from the Scroll Storage Room to the Secret Vault, maintaining the correct stacking order throughout the process.
Your Task:
You are required to track how many times a specific scroll, identified by its jutsu level s, is teleported during the entire operation.

Input Format:
n: An integer representing the total number of scrolls, where scroll 1 contains the weakest jutsu and scroll n contains the most dangerous jutsu.
s: An integer representing the jutsu level of the scroll you wish to monitor (1 ≤ s ≤ n).
Output Format:
Return the total number of times the scroll of jutsu level s is teleported during the entire operation.

Constraints:
1 <= n <= 10^4
1 <= s <= n
Sample Input:
n = 2
s = 1
Sample Output:
Explanation: The scroll 1 will be moved to the sealing room from scroll storage room. Then the scroll 2 would be moved to the secret vault from the storage room. Then the scroll 1 would be moved to the secret vault from the sealing room. Thus, scroll 1 teleported 2 times.

Link: https://www.hackerrank.com/contests/lpdwarka2016/challenges/shift-plates
