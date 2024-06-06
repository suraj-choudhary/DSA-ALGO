//
//  CreateMemoryOfLinkedListNode.h
//  DSA&ALGO
//
//  Created by suraj kumar on 01/04/24.
//

#ifndef CreateMemoryOfLinkedListNode_h
#define CreateMemoryOfLinkedListNode_h

void createLinkedList() {
    struct LNode *p;
  //  p = (struct LNode *)malloc(sizeof(struct LNode));
    p = new LNode;
    
    struct LNode *q;
    q = p;
    //p->data = 10;
    p->next = NULL;
    printf("%d ", p->data);
    q = p->next;
    q->data = 20;
    
    printf("%d ", q->data);

}

#endif /* CreateMemoryOfLinkedListNode_h */
