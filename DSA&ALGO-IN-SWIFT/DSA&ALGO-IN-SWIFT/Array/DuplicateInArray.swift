//
//  DuplicateInArray.swift
//  DSA&ALGO-IN-SWIFT
//
//  Created by suraj kumar on 19/02/24.
//

import Foundation

func countDuplicate(_ arr: [Int], _ n: Int) {

    var start = 0
    
    while start < n {
        
        
        print(arr[start], terminator: " ")
        start += 1
    }
    
}


func DuplicateMain() {
    let arr = [1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5]
    countDuplicate(arr, arr.count)
}
