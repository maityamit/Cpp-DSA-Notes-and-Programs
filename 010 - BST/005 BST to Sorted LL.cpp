/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/

pair<Node<int>* , Node<int>*> BST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        pair<Node<int>* , Node<int>*> ans;
        ans.first = NULL;
        ans.second = NULL;
        return ans;
    }

    Node<int> *node = new Node<int>(root->data);

    pair<Node<int>* , Node<int>*> leftans = BST(root->left);
    pair<Node<int>* , Node<int>*> rightans = BST(root->right);

    pair<Node<int>* , Node<int>*> ans;

    if (leftans.first == NULL && rightans.first == NULL)
    {

        ans.first = node;
        ans.second = node;
    }

    else if (!leftans.first && rightans.first)
    {
        ans.first = node;
        node->next = rightans.first;

        ans.second = rightans.second;
    }
    else if (leftans.first && rightans.first == NULL)
    {
        ans.first = leftans.first;
        leftans.second->next = node;
        ans.second = node;
    }
    else
    {
        ans.first = leftans.first;
        leftans.second->next = node;
        node->next = rightans.first;
        ans.second = rightans.second;
    }
    return ans;
}
Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    return BST(root).first;
}
