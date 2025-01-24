#include <stdio.h>


void mergeSortedLists(int list_1[], int size1, int list_2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements until one list is exhausted
    while (i < size1 && j < size2) {
        if (list_1[i] < list_2[j]) {
            merged[k++] = list_1[i++];
        } else {
            merged[k++] = list_2[j++];
        }
    }
	// incase one  of the lists is now empty
    // Copy any remaining elements from list1
    while (i < size1) {
        merged[k++] = list_1[i++];
    }

    // Copy any remaining elements from list2
    while (j < size2) {
        merged[k++] = list_2[j++];
    }
}


int main() {
    int list_1[] = {1, 3, 5, 7};
    int list_2[] = {2, 4, 6, 8, 10};
    
    int size1 = sizeof(list_1) / sizeof(list_1[0]);
    int size2 = sizeof(list_2) / sizeof(list_2[0]);
    int merged[size1 + size2]; // Array to store merged sorted list

    // Call merge function
    mergeSortedLists(list_1, size1, list_2, size2, merged);

    // Print the merged sorted list
    printf("Merged Sorted List: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
