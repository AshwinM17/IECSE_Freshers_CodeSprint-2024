#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 100
#define TITLE_LENGTH 100
#define ARTIST_LENGTH 100

// Function to check if two records are identical
int areIdentical(char artist1[], char title1[], int year1, char artist2[], char title2[], int year2) {
    return strcmp(artist1, artist2) == 0 && strcmp(title1, title2) == 0 && year1 == year2;
}

// Function to find the duplicate artwork records
void findDuplicates(char artists[][ARTIST_LENGTH], char titles[][TITLE_LENGTH], int years[], int size, char result[][TITLE_LENGTH]) {
    int found = 0;
    
    // Compare each record with every other record
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (areIdentical(artists[i], titles[i], years[i], artists[j], titles[j], years[j])) {
                // Store the duplicate titles in the result array
                strcpy(result[0], titles[i]);
                strcpy(result[1], titles[j]);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
}

int main() {
    int numRecords;

    // Get the number of records from the user
    printf("Enter the number of records: ");
    scanf("%d", &numRecords);

    char artists[MAX_RECORDS][ARTIST_LENGTH];
    char titles[MAX_RECORDS][TITLE_LENGTH];
    int years[MAX_RECORDS];

    // Read the records from the user
    for (int i = 0; i < numRecords; i++) {
        printf("\nEnter details for record %d\n", i + 1);
        
        printf("Artist: ");
        scanf(" %[^\n]%*c", artists[i]);  // Read the artist's name
        
        printf("Title: ");
        scanf(" %[^\n]%*c", titles[i]);  // Read the title
        
        printf("Year: ");
        scanf("%d", &years[i]);  // Read the year of creation
    }

    char result[2][TITLE_LENGTH];  // To store the titles of the duplicate records

    // Find the duplicates
    findDuplicates(artists, titles, years, numRecords, result);

    // Output the result
    if (strlen(result[0]) > 0) {
       for(int i=0;i<(sizeof(result) / sizeof(result[0]));i++){
           printf("%d",result[i]);
       }
    } else {
        printf("\nNo duplicates found.\n");
    }

    return 0;
}

