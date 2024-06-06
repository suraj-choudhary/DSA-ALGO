//
//  removeDuplicateList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 16/04/24.
//

#ifndef removeDuplicateList_h
#define removeDuplicateList_h

/// Delete node in sorted linkedlist


void removeDuplicateList(struct LNode *p) {
    struct LNode *q = p->next;
    
    while (q != NULL) {
        if (p->data != q->data) {
            p = q;
            q = q->next;
        } else {
            p->next = q->next;
            struct LNode *temp = q;
            q = q->next;
            free(temp);
        }
    }
}




#endif /* removeDuplicateList_h */
