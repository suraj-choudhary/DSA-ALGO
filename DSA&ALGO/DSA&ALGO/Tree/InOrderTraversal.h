//
//  InOrderTraversal.h
//  DSA&ALGO
//
//  Created by suraj kumar on 26/02/24.
//

#ifndef InOrderTraversal_h
#define InOrderTraversal_h


void inOrder(struct TreeNode *t) {
    
    if(t != NULL) {
        inOrder(t->left);
        printf("%d ", t->data);
        inOrder(t->right);
    }
}
void inOrderMain() {
    struct TreeNode *root = new TreeNode(8);
}

#endif /* InOrderTraversal_h */
