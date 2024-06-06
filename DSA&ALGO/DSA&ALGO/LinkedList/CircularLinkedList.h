//
//  CircularLinkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 09/05/24.
//

#ifndef CircularLinkedList_h
#define CircularLinkedList_h

struct CNode {
    int data;
    struct CNode *next;
} *Head = NULL;

void printNode(struct CNode *p) {
    do {
        printf("%d ", p->data);
        p = p->next;
    } while(p != Head);
}
void RSDisplay(struct CNode *h) {
    static int flag = 0;
    if(h != Head || flag == 0) {
        flag = 1;
        printf("%d ", h->data);

        RSDisplay(h->next);
    }
    flag = 0;
}
void cLinked(int arr[], int n) {
    struct CNode *t, *last;
    Head = (struct CNode *)malloc(sizeof(CNode));
    Head->data = arr[0];
    Head->next = Head;
    last = Head;
    for(int i = 1; i < n; i++) {
        t = (struct CNode *)malloc(sizeof(CNode));
        t->data = arr[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
    printNode(Head);
}

/// Description
/// - Parameters:
///   - pos: pos description
///   - x: x description
void insertInCircularLiked(int pos, int x) {
    struct CNode *t, *p;
    int i;
    if(pos == 0) {
        t = new CNode;
        t->data = x;
        if(Head == NULL) {
            Head = t;
            Head->next = Head;
        } else {
            p = Head;
            while (p != Head) {
                p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head = t;
        }
    } else {
        p = Head;
        for(i = 0; i < pos - 1; i++) {
            p = p->next;
        }
        t = new CNode;
        t->data = x;
        t->next = p->next;
        p->next = t;
        
    }
}

void createNodeMain() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cLinked(arr, size);
}


#endif /* CircularLinkedList_h */
