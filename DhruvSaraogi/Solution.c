#include <stdio.h>
#include <string.h>

#define MR 100
#define TL 100
#define AL 100

// Function to check if two records are identical
int Identical(char arr1[], char t1[], int y1, char arr2[], char t2[], int y2) {
    return (strcmp(arr1, arr2) == 0 && strcmp(t1, t2) == 0 && y1 == y2);
}

// Function to find the duplicate artwork records
void findDuplicates(char arr[][AL], char t[][TL], int y[], int size, char r[size][TL],int k) {
    int found = 0;
    
    // Compare each record with every other record
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (Identical(arr[i], t[i], y[i], arr[j], t[j], y[j])) {
                // Store the duplicate titles in the result array
                strcpy(r[k++], t[i]);
                strcpy(r[k++], t[j]);
            }
        }
    }
    
}

int main() {
    int num;

    // Get the number of records from the user
    printf("Enter the number of records: ");
    scanf("%d", &num);

    char arr[MR][AL];
    char t[MR][TL];
    int y[MR];
    int k=0;

    // Read the records from the user
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for record %d\n", i + 1);
        
        printf("Artist: ");
        scanf("%s", &arr[i]);  // Corrected: No & for array
        
        printf("\nTitle: ");
        scanf("%s", &t[i]);  // Corrected: No & for array
        
        printf("\nYear: ");
        scanf("%d", &y[i]);  // Read the year of creation
    }

    char r[num][TL];  // Initialize result with empty strings

    // Find the duplicates
    findDuplicates(arr, t, y, num, r,k);

    // Output the result
    if (strlen(r[0]) > 0) {
       for(int i=0;i<(sizeof(r)/sizeof(r[0]));i++){
           printf("%s",r[i]);
       }
    } else {
        printf("\nNo duplicates found.\n");
    }

    return 0;
}
