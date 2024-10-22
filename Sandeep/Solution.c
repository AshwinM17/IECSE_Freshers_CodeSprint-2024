#include <stdio.h>
#include <limits.h> 

#define MAX_N 45 

int minMovesHelper(int step, int n, int memo[]) {
    if (step == n) {
        return 0;
    }

    if (step > n) {
        return INT_MAX; 
    } 

    if (memo[step] != -1) {
        return memo[step];
    }

    int moveForward = INT_MAX;
    if (step + (step + 1) <= n) {
        moveForward = minMovesHelper(step + (step + 1), n, memo);
    }

    int moveBackward = INT_MAX;
    if (step + (step - 1) <= n && step - 1 > 0) {
        moveBackward = minMovesHelper(step + (step - 1), n, memo);
    }
 
    int result = INT_MAX;
    if (moveForward != INT_MAX || moveBackward != INT_MAX) {
        result = 1 + (moveForward < moveBackward ? moveForward : moveBackward);
    }

    memo[step] = result;
    
    return result;
}

int minMovesToTop(int n) {
    if (n == 1) return 0;  
  
    int memo[MAX_N + 1];
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;  
    }
    
    int result = minMovesHelper(1, n, memo);

    return (result == INT_MAX) ? -1 : result;
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    
    int result = minMovesToTop(n);
    
    if (result == -1) {
        printf("It's not possible to reach step %d.\n", n);
    } else {
        printf("Minimum number of moves to reach step %d: %d\n", n, result);
    }
    
    return 0;
}
