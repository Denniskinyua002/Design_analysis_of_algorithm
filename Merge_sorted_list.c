#include <stdio.h>
#include <stdlib.h>

void merge(int* list1, int size1, int* list2, int size2, int* mergedList) {
    int i = 0, j = 0, k = 0;

    // Compare elements from both lists and add the smaller one to mergedList
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            mergedList[k++] = list1[i++];
        } else {
            mergedList[k++] = list2[j++];
        }
    }

    // If list1 still has remaining elements, add them to mergedList
    while (i < size1) {
        mergedList[k++] = list1[i++];
    }

    // If list2 still has remaining elements, add them to mergedList
    while (j < size2) {
        mergedList[k++] = list2[j++];
    }
}

int main() {
    int list1[] = {1, 4, 7, 10};
    int list2[] = {2, 5, 8, 11};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    int mergedList[size1 + size2]; // Array to store merged list

    merge(list1, size1, list2, size2, mergedList);

    // Printing merged list
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedList[i]);
    }
    return 0;
}
