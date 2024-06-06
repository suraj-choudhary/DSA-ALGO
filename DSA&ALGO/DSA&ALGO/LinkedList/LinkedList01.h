//
//  LinkedList01.h
//  DSA&ALGO
//
//  Created by suraj kumar on 09/05/24.
//

#ifndef LinkedList01_h
#define LinkedList01_h

struct Node01 {
    int data;
    struct Node01 *next;
} * head = NULL;

void Display(struct Node01 *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}
/// Description
/// - Parameters:
///   - arr: arr description
///   - size: size description
void createLinked(int arr[], int size) {
    struct Node01 *t, *last;
    head = new Node01;
    head->data = arr[0];
    head->next = NULL;
    last = head;
    
    for (int i = 1; i < size; i++) {
        t = new Node01;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
   // Display(head);
}

/// Description
/// - Parameters:
///   - first: first description
///   - key: key description
void moveToHead(struct Node01 *first, int key, int size) {
    
    struct Node01 *helpingHand = nullptr;
    for(int i = 0; i < size; i++) {
        
        if(first->data == key) {
            helpingHand->next = first->next;
            first->next = head;
            head = first;
        }
        helpingHand = first;
        first = first->next;
    }
    Display(head);
}

/// Description
/// - Parameters:
///   - post: post description
///   - value: value description
void insert(int pos, int value) {
    
    struct Node01 *t, *p;
    if(pos == 0) {
        t = new Node01;
        t->data = value;
        t->next = head;
        head = t;
    } else if(pos > 0){
        p = head;
        for(int i = 0; i < pos - 1 && p; i++) {
            p = p->next;
        }
        if(p != NULL) {
            t = new Node01;
            t->data = value;
            t->next = p->next;
            p->next = t;
        }
 
    }
}


void createLinekdMain() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
   // createLinked(arr, size);
    insert(0, 10);
    insert(4, 20);
    Display(head);
   // moveToHead(head, 4, size);
}
#endif /* LinkedList01_h */
