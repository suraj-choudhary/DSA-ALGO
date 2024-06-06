//
//  InsertingAtIndex.h
//  DSA&ALGO
//
//  Created by suraj kumar on 12/04/24.
//

#ifndef InsertingAtIndex_h
#define InsertingAtIndex_h

void insertAtIndex(struct LNode *p,int pos) {
    
    struct LNode *temp = NULL;
    temp = new LNode;
    temp->data = 11;
    temp->next = NULL;
    for(int i = 0; i < pos - 1; i++) {
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
    
    displayLinkedList(first);
}


void insertingNode(struct LNode *head, int pos, int x) {
   
    struct LNode *p, *q;
    
    if(pos == 0) {
        p = new LNode;
        p->data = x;
        p->next = head;
        head = p;
    } else if(pos > 0) {
        q = head;
        for(int i = 1; i < pos - 1 && q; i++) {
            q = q->next;
        }
        p = new LNode; ///create node
        p->data = x; /// assign data to node
        
        //
        p->next = q->next;  /// =  7
        q->next = p;  ///
        
    }
    
    displayLinkedList(head);

}





#endif /* InsertingAtIndex_h */
