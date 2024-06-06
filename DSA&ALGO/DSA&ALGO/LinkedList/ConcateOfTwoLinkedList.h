//
//  ConcateOfTwoLinkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 17/04/24.
//

#ifndef ConcateOfTwoLinkedList_h
#define ConcateOfTwoLinkedList_h


void concateLikedList(struct LNode *first, struct LNode *second) {
    struct LNode *p = first;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = second;
    second = NULL;
}

#endif /* ConcateOfTwoLinkedList_h */
