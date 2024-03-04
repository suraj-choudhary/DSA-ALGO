//
//  InsertAtTheBegning.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/03/24.
//

#ifndef InsertAtTheBegning_h
#define InsertAtTheBegning_h

void displayNode(struct LNode *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insertingAtTheBegning(struct LNode **p, int key) {
    struct LNode *temp;
    temp = (struct LNode *)malloc(sizeof(struct LNode));
    temp->data = key;
    temp->next = *p;
    *p = temp;
}

void insertingAtTheBegningMain() {
    struct LNode *head = NULL;
    insertingAtTheBegning(&head, 3);
    insertingAtTheBegning(&head, 4);

    displayNode(head);
}

#endif /* InsertAtTheBegning_h */
