//
//  Triplet.h
//  LeetcodeEasy
//
//  Created by suraj kumar on 07/05/24.
//

#ifndef Triplet_h
#define Triplet_h

/*
 given an array containning N integer and an number S denoting a target sum
 
 find all distinct integer that can add up to form target sum.
 The numbers in each triplet should be ordered in ascending order, and triplet
 should be order too.
 return empty array if no such triplet exits
 */


/// Bruite force

void tripletSum(int arr[], int size, int target) {
    
    for(int i = 0; i < size - 3; i++) {
        int j = i + 1;
        int k = size - 1;
        while (j < k) {
            int currentSum = arr[i];
            currentSum += arr[j];
            currentSum += arr[k];
            if(currentSum == target) {
                printf("%d %d %d", arr[i], arr[j], arr[k]);
                printf("\n");
                j++;
                k--;
            } else if(currentSum > target) {
                k--;
            } else {
                j++;
            }
        }
    }
    
}

void tripletSumMain() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 18;
    tripletSum(arr, size, target);
}

#endif /* Triplet_h */
