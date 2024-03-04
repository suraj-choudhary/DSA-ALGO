//
//  insertAfter.h
//  DSA&ALGO
//
//  Created by suraj kumar on 04/03/24.
//

#ifndef insertAfter_h
#define insertAfter_h

void inserAfter(struct LNode *prev, int key) {
    
}


void push(struct LNode **head, int key) {
    struct LNode *temp;
    temp = (struct LNode *)malloc(sizeof(LNode));
    temp->data = key;
    temp->next = *head;
    *head = temp;
}


void inserAfterMain() {
    struct LNode *head = NULL;
    push(&head, 6);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    displayNode(head);
}


#endif /* insertAfter_h */
