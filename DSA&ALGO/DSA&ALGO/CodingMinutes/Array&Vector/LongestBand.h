//
//  LongestBand.h
//  DSA&ALGO
//
//  Created by suraj kumar on 08/05/24.
//

#ifndef LongestBand_h
#define LongestBand_h

///Longest Consecutive Subsequence
/// Description
/// - Parameters:
///   - arr: arr description
///   - n: n description
void longestBand(int arr[], int n) {
    sort(arr, arr + n);
    int maxBand = 1;
    int currentLen = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1] + 1) {
            currentLen++;
            maxBand = max(maxBand, currentLen);
            
        } else if(arr[i] != arr[i - 1]) {
            currentLen = 1;
        }
    }
    printf("%d ", maxBand);
}
void longestBandMain() {
    int arr[] = {36, 41, 56, 35, 44, 33, 34, 92, 93, 94, 95, 96, 97, 43, 32, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    longestBand(arr, size);
}



int largesConsecutive(vector<int>arr) {
    
    unordered_set<int>res;
    
    for(int x: arr) {
        res.insert(x);
    }
    /// iterrate over the array:
    int largestLen = 1;
    for(auto element: res) {
        int parent = element - 1;
        
        if(res.find(parent) == res.end()) {
            int next_no = element + 1;
            int cnt = 1;
            
            while (res.find(next_no) != res.end()) {
                next_no++;
                cnt++;
            }
            if(cnt > largestLen) {
                largestLen = cnt;
            }
        }
    }
    printf("%d ", largestLen);
    return 0;
}


void longestBandMainII() {
    vector<int>arr {36, 41, 56, 35, 44, 33, 34, 92, 93, 94, 95, 96, 97, 43, 32, 42};
    largesConsecutive(arr);
}


#endif /* LongestBand_h */
