//
//  TwoSum.swift
//  DSA&ALGO-IN-SWIFT
//
//  Created by suraj kumar on 24/03/24.
//

import Foundation


func checkPair(arr: [Int], target: Int) {
    
    for i in 0..<arr.count - 1 {
        
        for j in (i + 1)..<arr.count {
            if(arr[i] + arr[j] == target) {
                print(i, j, separator: " ")
                break
            }
        }
    }
}


func checkPairII(arr: [Int], target: Int) {
    var low = 0
    let arr2 = arr.sorted()
    var high = arr2.count - 1

    while(low < high) {
        
        if(arr2[low] + arr2[high] == target) {
            print(low , high)
            break
        } else if(arr2[low] + arr2[high] > target) {
            
            high -= 1
        } else {
            low += 1
        }
    }
}

func checkPairMain() {
    let arr = [3,2,4]
    let target = 6
    checkPairII(arr: arr, target: target)
}
