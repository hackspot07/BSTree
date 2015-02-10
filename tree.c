#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


TreeNode_ptr createTreeNode(int data){
	TreeNode_ptr newNode = malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = newNode->right = 0;
	return newNode;
};


BSTree createBSTree(void){
	BSTree *tree = malloc(sizeof(TreeNode));
	tree->root = NULL;
	return *tree;
};

int insert(BSTree *tree, int data){
	TreeNode_ptr node;
	TreeNode_ptr walker = tree->root;
	if(walker == NULL){
		node = createTreeNode(data);
		walker = node;
		return 1;
	}
	if(data < walker->data)
		walker = walker->left;
	if(data >= walker->data)
		walker = walker->right;
	insert(tree,data);
    return 0;
};

