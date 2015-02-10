typedef struct treeNode TreeNode;
typedef TreeNode* TreeNode_ptr;

typedef struct bsTree BSTree;


struct bsTree{
	TreeNode_ptr root;
	int count;
};

struct treeNode{
	int data;
	TreeNode_ptr left;
	TreeNode_ptr right;
};

BSTree createBSTree(void);