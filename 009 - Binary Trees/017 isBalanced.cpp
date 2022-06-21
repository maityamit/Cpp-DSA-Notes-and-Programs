bool isBalanced(BinaryTreeNode<int>* root){
	 if (root == NULL) 
        return true; 
    int l=heightOFtree(root->left);
	int r=heightOFtree(root->right);	
   
     if ( ( abs(l- r) ==0 || abs(l-r) == 1 ) && isBalanced(root->left) && isBalanced(root->right))
        return true;
    
   return false;
}
