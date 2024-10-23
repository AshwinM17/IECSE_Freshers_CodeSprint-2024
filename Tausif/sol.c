#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void append(long arr[], int n, long subset[], int subsize, int index, long matrix[][100], int *row) {
    if (index==n){
    	for (int i=0;i<subsize;i++){
    		matrix[*row][i]=subset[i];
    	}
    	(*row)++;
    	return;
    }
    subset[subsize]=arr[index];

    append(arr,n,subset,subsize+1,index+1,matrix,row);
    append(arr,n,subset,subsize,index+1,matrix,row);
}

void initialise(long arr[], int n, long matrix[][100]) {
    long subset[n];
    int row = 0; 
    append(arr, n, subset, 0, 0, matrix, &row);
}

int main() {
    long arr[] = {0,100,2000,3,5,4,6,0,100000,2500000,300}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int product=1;
    for (int i=0;i<n;i++){
    	product*=2;
    }
    long sum=0;
    int length=product; 
    int breadth = n; 
    long matrix[length][100]; 

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

    printf("%ld\n",sum);
    return 0;
}
