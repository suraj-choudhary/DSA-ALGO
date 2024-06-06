//
//  printAllSubarraysZeroSum.h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/05/24.
//

#ifndef printAllSubarraysZeroSum_h
#define printAllSubarraysZeroSum_h
#include "unordered_set"
using namespace std;

/// Bruite force
void printAllSubArrayZeroSum(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == 0) {
                printf("%d %d\n", i, j);
            }
        }
       
    }
}

void printAllSubArrayZeroSumMain() {
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printAllSubArrayZeroSum(arr, n);
}

#endif /* printAllSubarraysZeroSum_h */
