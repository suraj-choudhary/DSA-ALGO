//
//  segregate0and1.h
//  DSA&ALGO
//
//  Created by suraj kumar on 10/04/24.
//

#ifndef segregate0and1_h
#define segregate0and1_h


void segregate0and1(int arr[], int n) {
    
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        int cLeft = arr[start];
        int cRight = arr[end];
        if(cLeft == 0) {
            start++;
        } else if(cRight == 1) {
            end--;
        } else {
            swap(arr[start], arr[end]);
        }
    }
    
    display(arr, n);
}

void segregate0and1Main() {
    int arr[] = {0, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    segregate0and1(arr, size);
}


#endif /* segregate0and1_h */
