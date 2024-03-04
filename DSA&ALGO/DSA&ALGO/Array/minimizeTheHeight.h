//
//  minimizeTheHeight.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/03/24.
//

#ifndef minimizeTheHeight_h
#define minimizeTheHeight_h


void minimizeTheHeight(int arr[], int n, int k) {
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int minT = INT_MAX;
    int maxT = INT_MAX;
    
    for(int i = 1; i < n; i++) {
        
        if(arr[i] > k) {
            minT = min(arr[0] + k, arr[i] - k);
            maxT = max(arr[i - 1] + k, arr[n - 1] - k);
            ans = min(ans, maxT - minT);
        }
       
    }
    printf("%d ", ans);
}

void minimizeTheHeightMain() {
    int arr[] = {1, 5, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    minimizeTheHeight(arr, size, k);
}

#endif /* minimizeTheHeight_h */
