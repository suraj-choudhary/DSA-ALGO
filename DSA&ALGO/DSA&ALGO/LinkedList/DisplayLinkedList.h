//
//  DisplayLinkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 01/04/24.
//

#ifndef DisplayLinkedList_h
#define DisplayLinkedList_h

void displayLinkedList(struct LNode *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void rDispplay(struct LNode *p) {
    if(p != NULL) {
        printf("%d ", p->data);
        rDispplay(p->next);
    }
}

#endif /* DisplayLinkedList_h */
