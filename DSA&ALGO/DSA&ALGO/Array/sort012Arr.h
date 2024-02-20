//
//  sort012Arr.h
//  DSA&ALGO
//
//  Created by suraj kumar on 19/02/24.
//

#ifndef sort012Arr_h
#define sort012Arr_h

/*
 1. sorting
 2. count the 0, 1, 2
 3. partition
 */
void sort012(int a[], int n) {
    int x = 0;
    int y = 0;
    int z = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            x++;
        } else if (a[i] == 1) {
            y++;
        } else {
            z++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i < x) {
            a[i] = 0;
        } else if (i >= x && i < (x + y)) {
            a[i] = 1;
        } else {
            a[i] = 2;
        }
        printf("%d ", a[i]);
    }
}

void sort012Main() {
    int arr[] = {0, 2, 1, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, size);
}
#endif /* sort012Arr_h */
