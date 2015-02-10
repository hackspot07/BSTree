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

BSTree createBSTree(void);