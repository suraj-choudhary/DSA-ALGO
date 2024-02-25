//
//  IterativePreOrder.h
//  DSA&ALGO
//
//  Created by suraj kumar on 26/02/24.
//

#ifndef IterativePreOrder_h
#define IterativePreOrder_h
#include <stack>

void interativePreOrder(struct TreeNode *t) {
    stack<TreeNode *> st;
    
    while(t != NULL || !st.empty()) {
        if(t != NULL) {
            printf("%d ", t->data);
            st.push(t);
            t = t->left;
        } else {
            t = st.top();
            st.pop();
            t = t->right;
        }
    }

}

int interativePreOrderMain() {
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Preorder Traversal:" << endl;
    interativePreOrder(root);
    cout << endl;

    return 0;
}

#endif /* IterativePreOrder_h */
