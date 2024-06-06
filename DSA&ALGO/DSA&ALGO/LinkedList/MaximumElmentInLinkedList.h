//
//  MaximumElmentInLinkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/04/24.
//

#ifndef MaximumElmentInLinkedList_h
#define MaximumElmentInLinkedList_h

/// Description
/// - Parameter p: p description
int maximum(struct LNode *p) {
    int max = INT_MIN;
    while (p != NULL) {
        if(p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}


/// Description
/// - Parameter p: p description
int recMaximum(struct LNode *p) {
    int x = 0;
    if(p == 0) {
        return INT_MIN;
    }
    x = recMaximum(p->next);
    if(x > p->data) {
        return x;
    }
    return p->data;
}

#endif /* MaximumElmentInLinkedList_h */
