//
//  CountingNode.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/04/24.
//

#ifndef CountingNode_h
#define CountingNode_h

int contingNode(struct LNode *p) {
    int count = 0;
    while (p != NULL) {
        p = p->next;
        count += 1;

    }
    return count;
}

int recCount(struct LNode *p) {
    if(p == 0) {
        return 0;
    } else {
        return  1 + recCount(p->next);
    }
    return 0;
}

void continNodeMain() {
    
}
#endif /* CountingNode_h */
