#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    int expected_sum = n * (n - 1) / 2;
    int duplicate = actual_sum - expected_sum;

    return duplicate;
}

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d numbers (1 to %d) with one number repeated:\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findDuplicate(arr, n + 1);
    printf("The duplicate number is: %d\n", duplicate);

    return 0;
}
