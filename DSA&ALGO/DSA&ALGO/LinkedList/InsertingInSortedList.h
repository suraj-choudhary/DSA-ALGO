//
//  InsertingInSortedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 14/04/24.
//

#ifndef InsertingInSortedList_h
#define InsertingInSortedList_h



void insertingII(int x) {
    struct LNode *t, *last;
    t = new LNode;
    t->data = x;
    t->next = NULL;
    if(first == NULL) {
        last = first = t;
    } else {
        last->next = t;
        last = t;
    }
}
void insertingAtSortedList(struct LNode *head, int x) {
    struct LNode *p, *q;
    p = first;
    while (p != NULL && p->data < x) {
        q = p;
        p = p->next;
    }
    struct LNode *temp = new LNode;
    temp->data = x;
    temp->next = NULL;
    /// join
    temp->next = q->next;
    q->next = temp;
}
void insertingIIMain() {
    insertingII(3);
    insertingII(7);
    insertingII(9);
    insertingII(15);
    insertingII(20);
    insertingAtSortedList(first, 8);
    displayLinkedList(first);
}

#endif /* InsertingInSortedList_h */
