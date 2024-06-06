//
//  isConsecutiveLargestSubArray.h
//  DSA&ALGO
//
//  Created by suraj kumar on 22/05/24.
//

#ifndef isConsecutiveLargestSubArray_h
#define isConsecutiveLargestSubArray_h


bool lsearch(int arr[], int key, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

void largestSubArrayConsecutive(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        int x = arr[i];
        int count = 1;
        while(lsearch(arr, x + 1, size)) {
            x = x + 1;
            count++;
        }
    }
}

void largestSubArrayConsecutiveMain() {
    int arr[] = {2, 0, 2, 1, 4, 3, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    largestSubArrayConsecutive(arr, size);
}

#endif /* isConsecutiveLargestSubArray_h */
