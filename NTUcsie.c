// NTU_csie_data_structure_and_algorithm

// Algebraic expressions are quite naturally represented as binary trees.
// We can write binary expressions in prefix, infix or postfix notations.
// Now you are asked to write a pseudocodee that reads a prefix expression consisting only of integers and the operators + constructs the corresponding binary tree.
// Note that the tree must be constructed recursively.

TreePtr TreeConst(){
    TreePtr p;
    p = getnode();
    p->data = gettoken();
    if(IsOperand(p->data)){
        p->left = p->right = NULL;
    }else{
        p->left = TreeConst();
        p->right = TreeConst();
    }
    return p;
}