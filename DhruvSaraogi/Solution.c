#include <stdio.h>
#include <string.h>

#define MR 100
#define TL 100
#define AL 100


int Identical(char arr1[], char t1[], int y1, char arr2[], char t2[], int y2) {
    return (strcmp(arr1, arr2) == 0 && strcmp(t1, t2) == 0 && y1 == y2);
}


void findDuplicates(char arr[][AL], char t[][TL], int y[], int size, char r[size][TL],int k) {
    int found = 0;
    

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (Identical(arr[i], t[i], y[i], arr[j], t[j], y[j])) {
                
                strcpy(r[k++], t[i]);
                strcpy(r[k++], t[j]);
            }
        }
    }
    
}

int main() {
    int num;

    printf("Enter the number of records: ");
    scanf("%d", &num);

    char arr[MR][AL];
    char t[MR][TL];
    int y[MR];
    int k=0;
    int l=0;

    printf("\nEnter details for record \n");
    for (int i = 0; i < num; i++) {
        printf("Artist %d :",i+1);
        scanf("%s", &arr[i]); 
    }
    printf("\n");
    for (int i = 0; i < num; i++) {
        printf("Title %d: ",i+1);
        scanf("%s", &t[i]); 
    }
    printf("\n");
    for (int i = 0; i < num; i++) {
         printf("Year %d: ",i+1);
        scanf("%d", &y[i]);  
    }
    
    char r[num][TL];  
    
    findDuplicates(arr, t, y, num, r,k);

    if (strlen(r[0]) > 0) {
        l=sizeof(r)/sizeof(r[0]);
        for(int i=0;i<l;i++){
            if(i==0){
               printf("['%s',",r[i]);
            }
            else if(i==l-1){
               printf("'%s']",r[i]);
            }
            else{
               printf("'%s',",r[i]);
            }
           
        }
    } else {
        printf("\nNo duplicates found.\n");
    }

    return 0;
}
