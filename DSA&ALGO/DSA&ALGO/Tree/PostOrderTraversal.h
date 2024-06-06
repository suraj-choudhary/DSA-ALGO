//
//  PostOrderTraversal.h
//  DSA&ALGO
//
//  Created by suraj kumar on 26/02/24.
//

#ifndef PostOrderTraversal_h
#define PostOrderTraversal_h

void postOderTraversal(struct TreeNode *t) {
    if(t != NULL) {
        postOderTraversal(t->left);
        postOderTraversal(t->right);
        printf("%d ", t->data);
    }
    
}

void postOderTraversalMain() {
    struct TreeNode *root = new TreeNode(10);
    
    postOderTraversal(root);
}

#endif /* PostOrderTraversal_h */
