//
//  Rains.h
//  DSA&ALGO
//
//  Created by suraj kumar on 12/05/24.
//

#ifndef Rains_h
#define Rains_h


int trappedWater(vector<int>heights) {
   
    int n = heights.size();
    if(n <= 2) {
        return 0;
    }
    /// left
    vector<int>left(n, 0);
    vector<int>right(n, 0);
    left[0] = heights[0];
    right[n - 1] = heights[n - 1];
    /// right
    
    for(int i = 1; i < n; i++) {
        left[i] = max(heights[i - 1], heights[i]);
        right[n - i - 1] = max(right[n - i], heights[n - i - 1]);
    }
    int water = 0;
    for(int i = 0; i < n; i++) {
        water += min(left[i], right[i] - heights[i]);
    }
    printf("%d ", water);
     /// water
    
    return 1;
    
    
}

void trappedWaterMain() {
    vector<int>water{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    trappedWater(water);
    
}
#endif /* Rains_h */
