//
//  CreateALinkedListUsingArray.h
//  DSA&ALGO
//
//  Created by suraj kumar on 02/04/24.
//

#ifndef CreateALinkedListUsingArray_h
#define CreateALinkedListUsingArray_h
#include "MoveToHead.h"
#include "InsertingNode.h"
#include "InsertingAtIndex.h"
#include "DeleteNode.h"
#include "CheckLinkedListIsSortedOrNot.h"
#include "removeDuplicateList.h"
#include "reverseALinnkedList.h"
void likendListArrayIII(int arr[], int n) {
    struct LNode *t, *last;
    first = (struct LNode *)malloc(sizeof(struct LNode));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < n; i++) {
        t = (struct LNode *)malloc(sizeof(struct LNode));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t; /// rememebr
    }
    
}

int likendListArrayMain() {
    int arr[] = {10,20,20,40,50,50,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    likendListArrayIII(arr, n);
    reverseLinkedListII(first);
    return 0;
}

#endif /* CreateALinkedListUsingArray_h */
