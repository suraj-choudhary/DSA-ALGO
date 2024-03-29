//
//  majorityElement.h
//  DSA&ALGO
//
//  Created by suraj kumar on 21/02/24.
//

#ifndef majorityElement_h
#define majorityElement_h

// bruite force
/*
 Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.
 */
/*
 Input:
 N = 3
 A[] = {1,2,3}
 Output:
 -1
 Explanation:
 Since, each element in
 {1,2,3} appears only once so there
 is no majority element.
 */
void majorityElement(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int majorityCount = 0;
        
        for(int j = 0; j < n; j++) {
            
            if(arr[i] == arr[j])
                majorityCount += 1;
        }
        if(majorityCount > n / 2) {
            printf("%d ", arr[i]);
            break;
        }
    }
}

// Boyer-Moore Majority Voting Algorithm

void majorityElementII(int arr[], int size) {
    unordered_map<int, int> map;
    
    for(int i = 0; i < size; i++) {
        map[arr[i]]++;
    }
    for(auto it: map) {
        if(it.first > (size / 2)) {
            printf("%d ", it.first);
            break;
        }
    }
    
}

// Boyer–Moore majority vote algorithm

int majorityElementIII(int arr[], int n) {
    int count = 0;
    int element = 0;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            count++;
            element = arr[i];
        } else if(arr[i] == element) {
            count++;
        } else {
            count--;
        }
    }
    
    int cnt = 0;
    for(int j = 0; j < n; j++) {
        if(arr[j] == element) {
            cnt++;
        }
    }
    if(cnt > (n / 2)) {
        printf("%d ", element);
    }
    return 0;
}

void majorityElementMain() {
    int arr[] = {3,1,3,3,2, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    majorityElementIII(arr, size);
}

#endif /* majorityElement_h */
