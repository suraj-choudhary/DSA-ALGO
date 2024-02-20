//
//  DuplicateInArray.h
//  DSA&ALGO
//
//  Created by suraj kumar on 15/02/24.
//

#ifndef DuplicateInArray_h
#define DuplicateInArray_h
#include "vector"
using namespace::std;
/*
 Find duplicates in an array
 N = 5
 a[] = {2,3,1,2,3}
 Output:
 2 3
 */

// MARK: Display
void display(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// MARK: Swap

void swaping(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// MARK: Sort of element of array

int* sortArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swaping(&arr[i], &arr[j]);
            }
        }
    }
    return arr;
}

// MARK: Duplicate

void duplicatesII(int arr[], int size) {
    int *sortedArray = sortArr(arr, size);
    
    int lastDuplicate = 0;
    for(int i = 0; i < size; i++) {
        if(sortedArray[i] == sortedArray[i + 1] && lastDuplicate != sortedArray[i]) {
            printf("%d ", lastDuplicate);
            lastDuplicate = arr[i];
        }
    }
}

// MARK: Count the number of duplicate Array:

void countDuplicate(int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            int j = i + 1;
            while (arr[j] == arr[i])
                j++;
                printf("%d is %d times\n", arr[i], j - i);
                i = j - 1;
        }
    }
}
// MARK: Find duplicate using hashmap


void duplicatesIII(int arr[], int n) {
    int max = arr[n - 1];
    
    int X[max];

    for (int i = 0; i < n; i++) {
        X[arr[i]]++;
    }

    for (int i = 0; i <= max; i++) {
        if (X[i] > 1) {
            cout << "Element " << i << " occurs " << X[i] << " times." << endl;
        }
    }
}


// MARK: Find duplicate using unsorted Array:

void duplicatesIV(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        int count = 1;
        if(arr[i] != -1) {
            for(int j = i + 1; j < size; j++) {
                
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
            
        }
        if(count > 1) {
            printf("%d ", arr[i]);
        }
    }
}

void duplicatesMain() {
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    duplicatesIV(arr, size);
}

#endif /* DuplicateInArray_h */
