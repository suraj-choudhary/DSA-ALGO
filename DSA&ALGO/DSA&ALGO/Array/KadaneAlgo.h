//
//  KadaneAlgo.h
//  DSA&ALGO
//
//  Created by suraj kumar on 19/02/24.
//

#ifndef KadaneAlgo_h
#define KadaneAlgo_h

/*
 Given an integer array arr, find the contiguous subarray (containing at least one number) which
 has the largest sum and returns its sum and prints the subarray.
 */

/// Bruite force

void maximumSubArray(int arr[], int size) {
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++) {
        
        for(int j = i; j < size; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    printf("%d", maxi);
}

// MARK: Better approach:::

void maximumSubArrayII(int arr[], int size) {
    int maxi = INT_MIN;
    
    for(int i = 0; i < size; i++) {
        int sum = 0;
        for(int j = i; j < size; j++) {
            sum += arr[j];
            maxi = max(maxi, sum);
        }
    }
    printf("%d ", maxi);
}

// MARK: Optimal approach using kadane algorithm::

void maximumSubArrayIII(int arr[], int n) {
    int sum = 0;
    
    int maxi = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(sum > maxi) {
            maxi = sum;
        }
        
        if(sum < 0) {
            sum = 0;
        }
    }
    printf("%d ", maxi);
}



void maximumSubArrayMain() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    maximumSubArrayIII(arr, size);
}

#endif /* KadaneAlgo_h */
