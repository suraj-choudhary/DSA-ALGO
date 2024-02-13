//
//  MinimumJump.h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/02/24.
//

#ifndef MinimumJump_h
#define MinimumJump_h

void minimumJumpToReachEnd(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }
    
    for(int i = 1; i < end && i < i + arr[i]; i++) {
        minimumJumpToReachEnd(arr, start + 1, end);
        printf("%d ", arr[i]);
    }
    
}

void minJumpMain() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    minimumJumpToReachEnd(arr, 0, size);
}




#endif /* MinimumJump_h */
