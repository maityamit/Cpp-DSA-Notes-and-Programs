BinaryTreeNode<int>* helper(int *input,int si,int ei){
    if(si>ei){
        return NULL;
    }
    int mi = (si+ei)/2;
    BinaryTreeNode<int>* temp = new BinaryTreeNode<int>(input[mi]);
    BinaryTreeNode<int>* l_ans = helper(input,si,mi-1);
    BinaryTreeNode<int>* r_ans = helper(input,mi+1,ei);
    temp->left = l_ans;
    temp->right = r_ans;
    return temp;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    return helper(input,0,n-1);
}
