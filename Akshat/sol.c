#include <stdio.h>

int countTeleportations(int totalScrolls, int targetScroll) {
    if (totalScrolls == 0) return 0;
    int count = countTeleportations(totalScrolls - 1, targetScroll);
    if (totalScrolls == targetScroll) count++;
    count += countTeleportations(totalScrolls - 1, targetScroll);
    return count;
}

int main() {
    int teleportationCount = countTeleportations(2, 1);
    printf("%d\n", teleportationCount);
    return 0;
}
//or
// #include <stdio.h>
// #include <math.h>

// int countTeleportations(int totalScrolls, int targetScroll) {
//     return pow(2,totalScrolls-targetScroll);
// }

// int main() {
//     int totalScrolls, targetScroll;
//     scanf("%d %d", &totalScrolls, &targetScroll);
//     int teleportationCount = countTeleportations(totalScrolls, targetScroll);
//     printf("%d\n", teleportationCount);
//     return 0;
// }
