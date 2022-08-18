class TrieNode{
	public:
		char data;
		TrieNode **children;
		bool isTerminal;
		TrieNode(char data){
			thos->data = data;
			children = new TrieNode*[26];
			isTerminal = false;
		}
};
