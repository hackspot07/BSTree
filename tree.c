#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


BSTree createBSTree(void){
	BSTree *tree = malloc(sizeof(TreeNode));
	tree->root->data = 0;
	return *tree;
};


