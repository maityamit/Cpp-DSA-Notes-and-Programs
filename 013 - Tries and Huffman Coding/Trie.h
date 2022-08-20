class Trie{
	TrieNode *root;
	public:
		Trie(){
			root = new TrieNode('\0');
		}
		void insertWord(string word){
			insertWordHelper(root,word);
		}
		void insertWordHelper(TrieNode* root,string word){
			//Base Case
			if(word.size()==0){
				root->isTerminal=true;
				return;
			}
			
			//small calc
			int index = word[0]-'a';
			TrieNode *child;
			if(root->children[index] !=NULL){
				child = root->children(index);
			}else{
				child = new TrieNode(word[0]);
				root->children[index] = child;
			}
			
			//Recusrsive call
			insertWord(child,word.substr(1));
		}
};
