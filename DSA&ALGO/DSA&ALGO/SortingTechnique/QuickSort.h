//
//  QuickSort.h
//  DSA&ALGO
//
//  Created by suraj kumar on 23/03/24.
//

#ifndef QuickSort_h
#define QuickSort_h


int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l;
    int j = h;
    do {
        do {
            i++;
        }while(arr[i] <= pivot);
        do {
            j--;
        }while(arr[j] > pivot);
        
        if(i < j) {
            swap(&arr[i], &arr[j]);
        }
    } while(i < j);
    swap(&arr[l], &arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h) {
    int j;
    if(l < h) {
        j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, j);
    }
}

void quickSortMain() {
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size);
}

#endif /* QuickSort_h */
