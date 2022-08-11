// recursion
// Preorder Traversal
void preorder(TreePtr t){
    if(t != NULL){
        visit(t);
        preorder(t->leftchild);
        preorder(T->rightchild);
    }
}
// Inorder Traversal
void inorder(TreePtr t){
    if(t != NULL){
        inorder(t->leftchild);
        visit(t);
        inorder(T->rightchild);
    }
}
// Postorder Traversal
void postorder(TreePtr t){
    if(t != NULL){
        postorder(t->leftchild);
        postorder(T->rightchild);
        visit(t);
    }
}

// stack
// Preorder Traversal
preorderTraversal(root){
    puch(false, root);
    while(stack not empty){
        pop(flag, t);
        if(t is not empty){
            if(flag == true){
                print(t);
            }else{
                push(true, t);
                push(false, rightChild[t]);
                push(false, leftChild[t]);
            }
        }
    }
}
// Inorder Traversal
inorderTraversal(root){
    puch(false, root);
    while(stack not empty){
        pop(flag, t);
        if(t is not empty){
            if(flag == true){
                print(t);
            }else{
                push(false, rightChild[t]);
                push(true, t);
                push(false, leftChild[t]);
            }
        }
    }
}
// Postorder Traversal
postorderTraversal(root){
    puch(false, root);
    while(stack not empty){
        pop(flag, t);
        if(t is not empty){
            if(flag == true){
                print(t);
            }else{
                push(false, rightChild[t]);
                push(false, leftChild[t]);
                push(true, t);
            }
        }
    }
}
