pair<int,int> DiameterSecondApproch(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
    pair<int,int> l = DiameterSecondApproch(root->left);
    pair<int,int> r = DiameterSecondApproch(root->right);
    int lh = l.first;
    int rh = r.first;
    int ld = l.second;
    int rd = r.second;
    int height = 1+max(lh,rh);
    int dia = max(lh+rh,max(ld,rd));
    pair<int,int> pa;
    pa.first = height;
    pa.second = dia;
    return pa;
}
