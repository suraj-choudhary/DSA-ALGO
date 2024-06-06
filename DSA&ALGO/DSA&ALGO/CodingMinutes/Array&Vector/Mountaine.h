//
//  Mountaine.h
//  LeetcodeEasy
//
//  Created by suraj kumar on 08/05/24.
//

#ifndef Mountaine_h
#define Mountaine_h

/*
 write a function that makes input an array of disctinct integer and return the lenght of highest mountain
 A mountaine is defined as adjecent integer that are strictly increasing untill they reach
 a peak a which the become stricktly decreasing
 At least 3 number are required to form a montaine
 
 */


void mountainePeak(int arr[], int size) {
    int largest = 0;
    
    for(int i = 1; i <= size - 2;) {
        
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            
            /// count backward direction
            
            int count = 1;
            int j = i;
            
            while (j >= 1 && arr[j] > arr[j - 1]) {
                j--;
                count++;
            }
            
            while (i <= size - 2 && arr[i] > arr[i + 1]) {
                i++;
                count++;
            }
            
            largest = max(largest, count);
            /// count forward direction
            
        } else {
            i++;
        }
    }
    
    printf("%d ", largest);
}

void mountainePeakMain() {
    int arr[] = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, -2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    mountainePeak(arr, size);
    
}

#endif /* Mountaine_h */
