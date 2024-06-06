//
//  SumOfAllElementOfNode.h
//  DSA&ALGO
//
//  Created by suraj kumar on 03/04/24.
//

#ifndef SumOfAllElementOfNode_h
#define SumOfAllElementOfNode_h

int sumOfAllNode(struct LNode *p) {
    
    int sum = 0;
    while (p != NULL) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
    
}

int recSumOfAllNode(struct LNode *p) {
    if(p == NULL) {
        return 0;
    }
    return recSumOfAllNode(p->next) + p->data;
    
}


#endif /* SumOfAllElementOfNode_h */
