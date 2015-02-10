#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


BSTree createBSTree(void){
	BSTree *tree = malloc(sizeof(TreeNode_ptr));
	tree->root->data = 0;
	tree->count = 0;
	return *tree;
};