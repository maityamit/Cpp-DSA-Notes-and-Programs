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
class helper {
  public :
    TreeNode<int>*  m;
    TreeNode<int>* sm;
    
    helper (TreeNode<int>* m, TreeNode<int>* sm) {
        this->m = m;
        this->sm = sm;
    }
};

helper help (TreeNode<int>* root) {
    if(root==NULL){
        helper r(NULL,NULL);
        return r;
    }
    helper ans(root, NULL);
    for (int i = 0; i < root->children.size(); i++) {
            helper child = help (root -> children[i]);  
            if(child.m->data > ans.m->data){
                if(child.sm==NULL){
                    ans.sm=ans.m;
                    ans.m=child.m;
                }
                else{
                    if(child.sm->data > ans.m->data){
                        ans.sm=child.sm;
                        ans.m=child.m;
                    }
                    else{
                       ans.sm=ans.m;
                        ans.m=child.m; 
                    }
                }
            }
        else {
            if(ans.m->data!=child.m->data && (ans.sm==NULL || child.m->data > ans.sm->data)){
                ans.sm=child.m;
            }
        }
        }
    return ans;
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
     if (root == NULL) return NULL;
    helper ans = help (root);
    return ans.sm;
}
