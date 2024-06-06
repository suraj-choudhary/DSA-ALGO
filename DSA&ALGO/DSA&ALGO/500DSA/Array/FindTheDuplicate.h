//
//  FindTheDuplicate.h
//  DSA&ALGO
//
//  Created by suraj kumar on 22/05/24.
//

#ifndef FindTheDuplicate_h
#define FindTheDuplicate_h

/// Description
/// - Parameters:
///   - arr: arr description
///   - size: size description
void duplicate(int arr[], int size) {
    for(int i = 0; i < size; i++) {
       
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
}

/// Hasing


void duplicateII(int arr[], int size) {
    vector<bool> visited(size + 1, false);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0 && arr[i] <= size && visited[arr[i]]) {
            printf("%d ", arr[i]);
        } else {
            visited[arr[i]] = true;
        }
    }
    printf("\n");
}
void duplicateMain() {
    int arr[] = {1, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    duplicateII(arr, size);
}

#endif /* FindTheDuplicate_h */
