#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void append(int arr[], int n, int subset[], int subsetSize, int nextIndex, int matrix[][100], int* row) {
    if (nextIndex == n) {
        for (int i = 0; i < subsetSize; i++) {
            matrix[*row][i] = subset[i];
        }
        (*row)++;
        return;
    }

    subset[subsetSize] = arr[nextIndex];
    append(arr, n, subset, subsetSize + 1, nextIndex + 1, matrix, row);

    append(arr, n, subset, subsetSize, nextIndex + 1, matrix, row);
}

void initialise(int arr[], int n, int matrix[][100]) {
    int subset[n];
    int row = 0; 
    append(arr, n, subset, 0, 0, matrix, &row);
}

int main() {
    int arr[] = {1, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int product=1;
    for (int i=0;i<n;i++){
    	product*=2;
    }
    int sum=0;
    int length=product; 
    int breadth = n; 
    int matrix[length][100]; 

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < breadth; j++) {
            matrix[i][j] = 0;
        }
    }

    initialise(arr, n, matrix);

    for (int i=0;i<product;i++){
    	for (int j=0;j<n;j++){
    		sum+=matrix[i][j];
    	}
    }

    printf("%d\n",sum);
    return 0;
}
