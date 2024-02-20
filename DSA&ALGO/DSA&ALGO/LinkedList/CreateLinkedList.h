//
//  CreateLinkedList.h
//  DSA&ALGO
//
//  Created by suraj kumar on 19/02/24.
//

#ifndef CreateLinkedList_h
#define CreateLinkedList_h

struct Node {
    int data;
    struct Node *next;
}*first = NULL;

void create(int arr[], int size) {
    struct Node *last, *temp;
    first = (struct Node *)malloc(sizeof(struct Node));
    
    first->data = arr[0];
    first->next = NULL;
    
}

void createMain() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    create(arr, size);
}


#endif /* CreateLinkedList_h */
