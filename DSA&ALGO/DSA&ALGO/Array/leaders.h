//
//  leaders.h
//  DSA&ALGO
//
//  Created by suraj kumar on 20/02/24.
//

#ifndef leaders_h
#define leaders_h

void leaders(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int leader = arr[i];
            if(leader > arr[j]) {
                printf("%d ", leader);
                break;
            }
        }
    }
}

void leadersMain() {
    int arr[] = {16,17,4,3,5,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    leaders(arr, size);
}

#endif /* leaders_h */
