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
	BSTree *tree = malloc(sizeof(BSTree));
	tree->root = NULL;
	return *tree;
};


int insert(BSTree *tree, int data){
	TreeNode_ptr walker = tree->root;
	TreeNode_ptr prevNode = NULL;
	if(walker == NULL){
		tree->root = createTreeNode(data);
		return 1;
	}
	while(walker != NULL){
		prevNode = walker;
		walker = (data < prevNode->data) ? (walker->left) : (walker->right);
	}
	walker = createTreeNode(data);
	(data >= prevNode->data) ? (prevNode->right = walker) : (prevNode->left = walker);
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