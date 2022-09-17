/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    insertDuplicateNode(root->left);
    BinaryTreeNode<int>* l = root->left;
    BinaryTreeNode<int>* temp = new BinaryTreeNode<int>(root->data);
    root->left = temp;
    temp->left = l;
    insertDuplicateNode(root->right);
    
    
}
