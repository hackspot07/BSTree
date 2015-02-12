typedef struct treeNode TreeNode;
typedef TreeNode* TreeNode_ptr;

typedef struct bsTree BSTree;
typedef void Printer(int);


struct bsTree{
	TreeNode_ptr root;
};

struct treeNode{
	int data;
	TreeNode_ptr left;
	TreeNode_ptr right;
};


TreeNode_ptr createTreeNode(int data);
BSTree createBSTree(void);
int insert(BSTree *tree, int data);
TreeNode_ptr find(BSTree tree, int data);
void traverse(BSTree tree,Printer* printNode);
void prinTNode(int data);
TreeNode_ptr find_min(BSTree tree);

TreeNode_ptr delete(BSTree* tree,int data);