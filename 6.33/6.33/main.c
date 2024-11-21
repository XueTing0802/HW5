#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2; 

    if (arr[mid] == key) {
        return mid; 
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key); 
    }
    else {
        return binarySearch(arr, mid + 1, high, key); 
    }
}

int main() {
    int rolls = 36000;  
    int counts[13] = { 0 };  

    srand(time(NULL));

    for (int i = 0; i < rolls; i++) {
        int die1 = rand() % 6 + 1;  
        int die2 = rand() % 6 + 1;  
        int sum = die1 + die2;      
        counts[sum]++;
    }

    int results[11], index = 0;
    for (int i = 2; i <= 12; i++) {
        results[index++] = counts[i];
    }

    printf("Sum\tCount\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\n", i, counts[i]);
    }

    int searchKey;
    printf("\nEnter a count to search for: ");
    scanf_s("%d", &searchKey);

    int foundIndex = binarySearch(results, 0, 10, searchKey);

    if (foundIndex != -1) {
        printf("Count %d found at index %d (Sum %d).\n", searchKey, foundIndex, foundIndex + 2);
    }
    else {
        printf("Count %d not found in the results.\n", searchKey);
    }

    return 0;
}
