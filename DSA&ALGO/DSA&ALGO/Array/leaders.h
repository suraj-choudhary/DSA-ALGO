//
//  leaders.h
//  DSA&ALGO
//
//  Created by suraj kumar on 20/02/24.
//

#ifndef leaders_h
#define leaders_h

// Briute force

void leaders(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isLeader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            printf("%d ", arr[i]);
        }
    }
}

// MARK:

void leadersII(int arr[], int n) {
    int max = arr[n - 1];
    for(int i = n - 1; i >= 0; i--) {
        
        if(max < arr[i]) {
            max = arr[i];
            printf("%d ", max);
        }

    }
    
}

void leadersMain() {
    int arr[] = {16,17,4,3,5,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    leadersII(arr, size);
}

#endif /* leaders_h */
