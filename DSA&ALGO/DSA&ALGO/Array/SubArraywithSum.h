//
//  SubArraywithSum.h
//  DSA&ALGO
//
//  Created by suraj kumar on 19/02/24.
//

#ifndef SubArraywithSum_h
#define SubArraywithSum_h

/*
 Find Indexes of a subarray with given sum
 N = 5, S = 12
 A[] = {1,2,3,7,5}
 Output: 2 4
 Explanation: The sum of elements
 from 2nd position to 4th position
 is 12.
 */

///bruite force algorithm
void sumOfSubArray(int arr[], int size, int tSum) {
    
    for(int i = 0; i < size; i++) {
        int cSum = arr[i];
        if(cSum == tSum) {
            printf("%d ", i);
            return;
        } else {
            for(int j = i + 1; j < size; j++) {
                cSum += arr[j];
                if(cSum == tSum) {
                    printf("%d %d",i, j);
                    return;
                }
            }
        }
        
    }
}
/// Find subarray with given sum using Sliding Window

void sumOfSubArrayII(int arr[], int size, int tSum) {
    int cSum = arr[0];
    int start = 0;
    for(int i = 1; i < size; i++) {
        
        while (cSum > tSum && start < i - 1) {
            cSum = cSum - arr[start];
            start++;
        }
        
        if(tSum == cSum) {
            printf("%d %d", start, i);
        }
        if(i < size) {
            cSum += arr[i];
        }
    }
}

int subArraySumMain() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 33;
    sumOfSubArrayII(arr, size, sum);
    return 0;
}



#endif /* SubArraywithSum_h */
