//
//  CreateLinkedList.swift
//  DSA&ALGO-IN-SWIFT
//
//  Created by suraj kumar on 12/04/24.
//

import Foundation

class Node {
    var data: Int
    var next: Node?

    init(data: Int) {
        self.data = data
        self.next = nil
    }
}

var first: Node?

func display(_ p: Node?) {
    var current = p
    while let node = current {
        print(node.data, terminator: " ")
        current = node.next
    }
}

func insert() {
    // Your insert function implementation goes here
}

func moveToHead(_ p: Node?, _ key: Int) {
    var p = p
    var q: Node?

    while p != nil {
        if p?.data == key {
            q?.next = p?.next
            p?.next = first
            first = p
        }
        q = p
        p = p?.next
    }

    display(first)
}

func create(_ arr: [Int]) {
    var last: Node?
    first = Node(data: arr[0])
    last = first

    for i in 1..<arr.count {
        let t = Node(data: arr[i])
        last?.next = t
        last = t
    }

    moveToHead(first, 3)
}

