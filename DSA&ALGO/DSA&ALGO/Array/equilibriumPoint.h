//
//  equilibriumPoint.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/03/24.
//

#ifndef equilibriumPoint_h
#define equilibriumPoint_h
// Bruite force
void equilibriumPoint(int arr[], int n) {
    int leftSum;
    int rightSum;
    for(int i = 0; i < n; i++) {
        leftSum = 0;
        for(int j = 0; j < i; j++) {
            leftSum += arr[j];
            rightSum = 0;
            for(int k = i + 1; k < n; k++) {
                rightSum += arr[k];
            }
            if(leftSum == rightSum) {
                printf("%d ", i + 1);
                return;
            }
        }
    }
}

// Equilibrium index of an array using two pointers:

void equilibriumPointII(int arr[], int size) {
    int left = 0;
    int right = 0;
    int pivot = 0;
    
    for(int i = 1; i < size; i++) {
        right += arr[i];
    }
    
    while (pivot < size && right != left) {
        pivot++;
        right -= arr[pivot];
        left += arr[pivot - 1];
    }
    if(left == right) {
        printf("%d ", pivot);
        return;
    }
    return;
    
}

//Equilibrium index of an Array using Array-Sum:

void equilibriumPointIII(int arr[], int size) {
    int sum = 0;
    int leftSum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    for(int i = 0; i < size; i++) {
        sum -= arr[i];
        
        if(leftSum == sum) {
            printf("%d ", i);
            return;
        }
        leftSum += arr[i];
    }
}

void equilibriumPointMain() {
    int arr[] = {1,3,5,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    equilibriumPointIII(arr, size);
}
#endif /* equilibriumPoint_h */
