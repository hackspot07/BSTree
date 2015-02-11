#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


TreeNode_ptr createTreeNode(int data){
	TreeNode_ptr newNode = malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
};


BSTree createBSTree(void){
	BSTree tree;
	tree.root = calloc(sizeof(TreeNode),1);
	return tree;
};


int insert(BSTree *tree, int data){
	TreeNode_ptr walker = tree->root;
	TreeNode_ptr exp = NULL;
	if(walker->data == 0){
		tree->root = createTreeNode(data);
		return 1;
	}
	while(walker != NULL){
		exp = walker;
		walker = (data < exp->data) ? (walker->left) : (walker->right);
	}
	walker = createTreeNode(data);
	(data >= exp->data) ? (exp->right = walker) : (exp->left = walker);
	return 1;
};



TreeNode_ptr find(BSTree tree, int data){
	TreeNode_ptr walker = tree.root;
	while(walker != NULL){ 
		if(walker->data == data)
			return walker;
		walker = (data < walker->data) ? walker->left : walker->right;
	}
	return NULL;
};