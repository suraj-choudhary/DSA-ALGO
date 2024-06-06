//
//  SortBinaryInLinear.h
//  DSA&ALGO
//
//  Created by suraj kumar on 17/05/24.
//

#ifndef SortBinaryInLinear_h
#define SortBinaryInLinear_h

void sortBinaryArray(int arr[], int n) {
    
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 1) {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


void sortBinaryArrayMain() {
    int arr[] = {1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortBinaryArray(arr, size);
    
}


#endif /* SortBinaryInLinear_h */
