//
//  InsertNodeAtLast.h
//  DSA&ALGO
//
//  Created by suraj kumar on 13/04/24.
//

#ifndef InsertNodeAtLast_h
#define InsertNodeAtLast_h

void insertLast(int x) {
    struct LNode *t, *last;
    t = new LNode;
    t->data = x;
    t->next = NULL;
    
    if(first == NULL) {
        first = last = t;
    } else {
        last->next = t;
        last = t;
    }
}

void insertLastMain() {
    insertLast(1);
    insertLast(2);
    insertLast(3);
    displayLinkedList(first);

}

#endif /* InsertNodeAtLast_h */
