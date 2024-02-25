//
//  PreOrderTraversal.h
//  DSA&ALGO
//
//  Created by suraj kumar on 22/02/24.
//

#ifndef PreOrderTraversal_h
#define PreOrderTraversal_h

struct TreeNode {
    struct TreeNode *left;
    int data;
    struct TreeNode *right;
    
    TreeNode(int data) {
        data = data;
        left = right = NULL;
    }
};

void preOrder(struct TreeNode *root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void preOrderMain() {
    struct TreeNode *root = new TreeNode(1);
    preOrder(root);
}


#endif /* PreOrderTraversal_h */
