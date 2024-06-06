//
//  MoveToHead.h
//  DSA&ALGO
//
//  Created by suraj kumar on 11/04/24.
//

#ifndef MoveToHead_h
#define MoveToHead_h


/// Description
/// - Parameters:
///   - p: p description
///   - key: key description
void MoveToHead(struct LNode *p, int key) {
    
    struct LNode *q = NULL;
    
    while (p != NULL) {
        
        if(p->data == key) {
            
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
        
    }
    
    displayLinkedList(first);
}



/// Description
/// - Parameters:
///   - p: p description
///   - key: key description
void MoveToHeadII(struct LNode *p, int key) {
    
    struct LNode *q = NULL;
    while (p != NULL) {
        if(key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
    displayLinkedList(first);
}

#endif /* MoveToHead_h */
