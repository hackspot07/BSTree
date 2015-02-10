typedef struct treeNode TreeNode;
typedef TreeNode* TreeNode_ptr;

typedef struct bsTree BSTree;


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