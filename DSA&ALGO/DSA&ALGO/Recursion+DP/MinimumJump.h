//
//  MinimumJump.h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/02/24.
//

#ifndef MinimumJump_h
#define MinimumJump_h

void minimumJumpToReachEnd(int arr[], int start, int end, int path[], int pathIndex) {
    if (start >= end) {
        for (int i = 0; i < pathIndex; i++) {
            printf("%d", path[i]);
            if (i != pathIndex - 1) {
                printf("->");
            }
        }
        printf("\n");
        
        return;
    } else {
        for (int i = start + 1; i <= start + arr[start] && i <= end; i++) {
            path[pathIndex] = arr[start];
            minimumJumpToReachEnd(arr, i, end, path, pathIndex + 1);
        }
    }
}

void minJumpMain() {
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int path[size];
    minimumJumpToReachEnd(arr, 0, size, path, 0);
}





#endif /* MinimumJump_h */
