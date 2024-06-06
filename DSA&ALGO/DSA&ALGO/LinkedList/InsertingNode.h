//
//  InsertingNode.h
//  DSA&ALGO
//
//  Created by suraj kumar on 11/04/24.
//

#ifndef InsertingNode_h
#define InsertingNode_h


/// inserting before first node

void insertBF(struct LNode *p, int key) {
    struct LNode *t = NULL;
    t = new LNode;
    t->data = key;
    t->next = p;
    p = t;
    
    displayLinkedList(p);
}




#endif /* InsertingNode_h */
