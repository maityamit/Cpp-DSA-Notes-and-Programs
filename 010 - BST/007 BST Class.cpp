/**********************************************************

	Following is the Binary Tree Node class structure

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
	
***********************************************************/

class BST
{
    // Complete this class
public:
    BinaryTreeNode<int> *root;

private:
    bool sea(int key, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return false;
        if (node->data == key)
            return true;

        bool ans;
        if (key < node->data)
            ans = sea(key, node->left);
        else
            ans = sea(key, node->right);

        return ans;
    }

    BinaryTreeNode<int> *ins(int key, BinaryTreeNode<int> *node)
    {

        if (node == NULL)
        {
            BinaryTreeNode<int> *inode = new BinaryTreeNode<int>(key);
            return inode;
        }
        if (key > node->data)
            node->right = ins(key, node->right);
        else
            node->left = ins(key, node->left);

        return node;
    }

    BinaryTreeNode<int> *findMin(BinaryTreeNode<int> *node)
    {
        if (node->left == NULL)
            return node;
        return findMin(node->left);
    }

    BinaryTreeNode<int> *del(int key, BinaryTreeNode<int> *node)
    {

        if (node == NULL)
            return NULL;

        if (key > node->data)
            node->right = del(key, node->right);
        else if (key < node->data)
            node->left = del(key, node->left);
        else
        {
            // If node is leaf
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int> *temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> *minnode = findMin(node->right);

                node->data = minnode->data;
                node->right = del(minnode->data, node->right);
                return node;
            }
        }

        return node;
    }
    void pr(BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return;

        cout << node->data << ":";

        if (node->left != NULL)
            cout << "L:" << node->left->data << ",";
        if (node->right != NULL)
            cout << "R:" << node->right->data;
        cout << endl;

        pr(node->left);
        pr(node->right);
    }

public:
    void insert(int key)
    {
        this->root = ins(key, this->root);
    }
    void remove(int key)
    {
        this->root = del(key, this->root);
    }
    bool search(int key)
    {
        return sea(key, this->root);
    }
    void print()
    {
        pr(root);
    }
};
