//
//  DeleteNode.h
//  DSA&ALGO
//
//  Created by suraj kumar on 15/04/24.
//

#ifndef DeleteNode_h
#define DeleteNode_h

void deleteNode(int pos) {
    
    struct LNode *p, *q;
    int x = -1;
    if(pos == 1) {
        x = first->data;
        p = first;
        first = first->next;
        delete [] p;
    } else {
        p = first;
        q = NULL;
        
        for(int i = 0; i < pos - 1 && p; i++) {  ///    int arr[] = {3, 7, 5, 10, 9, 3, 5};
            q = p;
            p = p->next;
        }
        if(p) {
            q->next = p->next;
            x = p->data;
            delete [] p;
        }
        
    }
    displayLinkedList(first);
}

#endif /* DeleteNode_h */
