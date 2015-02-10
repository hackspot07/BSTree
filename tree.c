#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


TreeNode_ptr createTreeNode(int data){
	TreeNode_ptr newNode = calloc(sizeof(TreeNode),1);
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
};


BSTree createBSTree(void){
	BSTree *tree = calloc(sizeof(TreeNode),1);
	tree->root = NULL;
	return *tree;
};


int insert(BSTree *tree, int data){
	TreeNode_ptr walker = tree->root;
	TreeNode_ptr exp =createTreeNode(0);

	while(walker != NULL){
		if(data < walker->data){ 
			walker = walker->left;
			exp = walker;
		}
		if(data >= walker->data){ 
			walker = walker->right;
			exp = walker;
		}
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