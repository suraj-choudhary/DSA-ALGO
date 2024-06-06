//
//  SearchingInLinkedin.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/04/24.
//

#ifndef SearchingInLinkedin_h
#define SearchingInLinkedin_h

/*
 linear search
 binary search
 */

void linearSearch(struct LNode *p, int key) {
    
    while (p != NULL) {
        if(p->data == key) {
            printf("key is found at: %d index", key);
            return;
        }
    }
    return;
}




#endif /* SearchingInLinkedin_h */
