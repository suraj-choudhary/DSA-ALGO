//
//  reverseALinnkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 17/04/24.
//

#ifndef reverseALinnkedList_h
#define reverseALinnkedList_h


void reverseLinkedList(struct LNode *head) {
    struct LNode *p = head;
    int i = 0;
    
    int *arr = new int[i];
    
    while (p != NULL) {
        arr[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;
    while (p != NULL) {
        p->data = arr[i--];
        p = p->next;
    }   
    displayLinkedList(first);
}

void reverseLinkedListII(struct LNode *head) {
    struct LNode *p = head;
    
    struct LNode *q = NULL;
    struct LNode *r = NULL;
    
    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    displayLinkedList(q);
}


void reverseListIII(struct LNode *q, struct LNode *p) {
    
    while (p != NULL) {
        reverseListIII(p, p->next);
        p->next = q;
    }
    first = q;
}



#endif /* reverseALinnkedList_h */
