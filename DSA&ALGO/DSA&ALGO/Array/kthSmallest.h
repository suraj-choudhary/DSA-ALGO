//
//  kthSmallest.h
//  DSA&ALGO
//
//  Created by suraj kumar on 27/02/24.
//

#ifndef kthSmallest_h
#define kthSmallest_h

int kthSmallestI(int arr[], int l, int r, int k) {

    sort(arr, arr + r);
    
    printf("%d ", arr[k - 1]);
    return 0;
}

int count(int nums[], int mid, int size)
{
    
    int cnt = 0;
 
    for (int i = 0; i < size; i++)
        if (nums[i] <= mid)
            cnt++;

     return cnt;
}

// Method 2 using binary search
int kthSmallestII(int arr[], int l, int r, int k) {
    int low = INT_MAX;
    int high = INT_MIN;
    
    for(int i = 0; i < r; i++) {
        low = min(arr[i], low);
        high = max(arr[i], high);
    }
    
    while(low < high) {
        int mid = low + (high - low) / 2;
        if (count(arr, mid, r) < k)
            low = mid + 1;
        
        else
            high = mid;
    }
    printf("%d ", low);
    return low;
}

// method 3 using binary search

int kthSmallestIII(int arr[], int l, int r, int k) {
    
    return 0;
}


int kthSmallestMain() {
    int arr[] = {12, 3, 5, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    kthSmallestII(arr, 0, size, 3);
    return 0;
}

#endif /* kthSmallest_h */
