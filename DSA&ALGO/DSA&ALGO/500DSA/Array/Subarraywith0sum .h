//
//  Subarraywith0sum .h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/05/24.
//

#ifndef Subarraywith0sum__h
#define Subarraywith0sum__h
#include "unordered_set"
/// Bruite force
void subArrayZeroSum(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        int sum = arr[i];
        for(int j = i + 1; j < size; j++) {
            sum += arr[j];
            
            if(sum == 0) {
                printf("yes");
            }
        }
    }
}

// Subarray with 0 sum using Hashing:

void subArrayZeroSumII(int arr[], int n) {
    std::unordered_set<int>newArr;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(newArr.find(sum) != newArr.end() || sum == 0) {
            printf("yes");
        } else {
            newArr.insert(sum);
        }
    }
    
}

void subArrayZeroSumMain() {
    int arr[] = {4, 2, -3, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    subArrayZeroSum(arr, size);
}

#endif /* Subarraywith0sum__h */
