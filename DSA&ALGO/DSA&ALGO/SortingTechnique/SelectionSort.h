//
//  SelectionSort.h
//  DSA&ALGO
//
//  Created by suraj kumar on 19/03/24.
//

#ifndef SelectionSort_h
#define SelectionSort_h

void selectionSort(int arr[], int size) {
    int i, j, k;
    for(i = 0; i < size - 1; i++) {
        
        for(j = k = i; j < size; j++) {
            
            if(arr[j] < arr[k])
                k = j;
            
        }
        swap(&arr[i], &arr[k]);
    }
    
    displayII(arr, size);
}

void selectionSortMain() {
    int arr[] = {11,13,7,12,16,9,24,5,10,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
}

#endif /* SelectionSort_h */
