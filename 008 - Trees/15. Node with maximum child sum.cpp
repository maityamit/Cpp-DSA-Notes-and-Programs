/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* ans = root;
    int sum = root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
    }
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* x = maxSumNode(root->children[i]);
        int xsum = x->data;
        for(int k=0;k<x->children.size();k++){
            xsum+=x->children[k]->data;
        }
        if(xsum>sum){
            ans = x;
        }
    }
    return ans;
    
}
