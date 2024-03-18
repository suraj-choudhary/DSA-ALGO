//
//  InsertionSort.h
//  DSA&ALGO
//
//  Created by suraj kumar on 18/03/24.
//

#ifndef InsertionSort_h
#define InsertionSort_h


void insertionSort(int arr[], int size) {
    
    for(int i = 1; i < size; i++) {
        int j = i - 1;
        
        int x = arr[j];
        
        while (j > - 1 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]  = x;
    }
}

void insertionSortMain() {
    int arr[] = {8, 5, 7, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
}

#endif /* InsertionSort_h */
