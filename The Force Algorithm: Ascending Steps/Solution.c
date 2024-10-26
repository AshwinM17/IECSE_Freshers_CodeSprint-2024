#include <stdio.h>
#include <limits.h> 
#include <stdbool.h>

int minMovesHelper(int current, int n, int memo[]) {
    if (current == n) {
        return 0; 
    }

    if (current < 1 || current > n) {
        return INT_MAX; 
    }

    if (memo[current] != -1) {
        return memo[current];
    }

    int moveForward = minMovesHelper(current + 1, n, memo); 
    int jumpTwoSteps = minMovesHelper(current + 2, n, memo); 

    int result = 1 + (moveForward < jumpTwoSteps ? moveForward : jumpTwoSteps);

    memo[current] = result;

    return result;
}

int minMovesToReachTop(int n) {
    int memo[n + 1]; 
    for (int i = 0; i <= n; i++) {
        memo[i] = -1; 
    }

    int result = minMovesHelper(1, n, memo);
    return result == INT_MAX ? -1 : result; 
}

int main() {
    int n; 
    printf("Enter the number of steps in the staircase: ");
    scanf("%d", &n); 

    if (n > 66) {
        printf("It is impossible to reach step %d\n", n);
    } else if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
    } else {
        int result = minMovesToReachTop(n);
        if (result == -1) {
            printf("It is impossible to reach step %d\n", n);
        } else {
            printf("Minimum moves to reach step %d: %d\n", n, result);
        }
    }

    return 0;
}
