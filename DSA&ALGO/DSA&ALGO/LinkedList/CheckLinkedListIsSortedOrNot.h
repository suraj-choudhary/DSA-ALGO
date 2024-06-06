//
//  CheckLinkedListIsSortedOrNot.h
//  DSA&ALGO
//
//  Created by suraj kumar on 16/04/24.
//

#ifndef CheckLinkedListIsSortedOrNot_h
#define CheckLinkedListIsSortedOrNot_h


bool sortedListOrnot(struct LNode *head) {
    
    int x = INT_MIN;
    
    struct LNode *p = head;
    
    while (p != NULL) {
        if(p->data < x) {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}


#endif /* CheckLinkedListIsSortedOrNot_h */
