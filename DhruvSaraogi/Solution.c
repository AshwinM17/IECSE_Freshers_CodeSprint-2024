#include <stdio.h>
#include <string.h>

#define MR 100
#define TL 100
#define AL 100


int Identical(char arr1[], char t1[], int y1, char arr2[], char t2[], int y2) {
    return (strcmp(arr1, arr2) == 0 && strcmp(t1, t2) == 0 && y1 == y2);
}


int findDuplicates(char arr[][AL], char t[][TL], int y[], int size) {
    int c = 0;
    

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (Identical(arr[i], t[i], y[i], arr[j], t[j], y[j])) {
                c++; 
            }
        }
    }
    return c;
    
}

int main() {
    int num;

    printf("Enter the number of records: ");
    scanf("%d", &num);

    char arr[MR][AL];
    char t[MR][TL];
    int y[MR];

    for (int i = 0; i < num; i++) {
        scanf("%s", &arr[i]); 
    }
    for (int i = 0; i < num; i++) {
        
        scanf("%s", &t[i]); 
    }
    for (int i = 0; i < num; i++) {
        scanf("%d", &y[i]);  
    }
    
    
    printf("%d",findDuplicates(arr, t, y, num));


    return 0;
}
