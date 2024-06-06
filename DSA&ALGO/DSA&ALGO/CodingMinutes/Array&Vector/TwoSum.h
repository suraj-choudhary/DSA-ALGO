//
//  TwoSum.h
//  LeetcodeEasy
//
//  Created by suraj kumar on 30/04/24.
//

#ifndef TwoSum_h
#define TwoSum_h
#include "unordered_set"
using namespace std;

/// Description
/// - Parameters:
///   - arr: arr description
///   - size: size description
///   - sum: sum description
std::vector<int> twoSum(int arr[], int size, int sum) {
    vector<int> res;
    for(int i = 0; i < size - 1; i++) {
        
        for(int j = i + 1; j < size; j++) {
            
            if(arr[i] + arr[j] == sum) {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return {};
}

/// Description
/// - Parameters:
///   - arr: arr description
///   - size: size description
///   - target: target description
void twoSumII(int arr[], int size, int sum) {
    /// x + y = z => x = z - y
    unordered_set<int>res;
    
    for(int i = 0; i < size; i++) {
        int x = sum - arr[i];
        if (res.find(x) != res.end()) {
            printf("%d %d", x, arr[i]);
        }
        res.insert(arr[i]);
    }
}

/// based on binar searc

bool binarySearh(int arr[], int low, int heigh, int key) {
    
    while (low <= heigh) {
        int mid = low + (heigh - low) / 2;
        
        if(arr[mid] == key) {
            return true;
        } else if(arr[mid] > key) {
            heigh = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

bool checkTwoSum(int arr[], int size, int sum) {
    sort(arr, arr + size);
    for(int i = 0; i < size - 1; i++) {
        int searchKey = sum - arr[i];
        bool value = binarySearh(arr, i + 1, size - 1, searchKey);
        if(value) {
            printf("yes");
            return true;
        }
    }
    return false;
}

void checkTwoSumII(int arr[], int size, int tar) {
    sort(arr, arr + size);
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        int cSum = arr[start] + arr[end];
        if(cSum == tar) {
            printf("%d %d", arr[start], arr[end]);
            printf("\n");
            start++;
            end--;
        } else if(cSum > tar) {
            end--;
        } else {
            start++;
        }
    }
}
void twoSumMain() {
    int arr[] = {1, 4, 45, 6, 10, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkTwoSumII(arr, size, 14);
}

#endif /* TwoSum_h */
