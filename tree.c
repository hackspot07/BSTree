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


TreeNode_ptr temp;

int insert(BSTree *tree, int data){
	TreeNode_ptr walker = tree->root;
	if(walker == NULL){
		walker = createTreeNode(data);
		if(data >= walker->data && temp != NULL)
			temp->right = walker;
		else
			temp->left = walker;
		return 1;
	}
	if(data < walker->data){ 
		walker = walker->left;
		temp = walker;
	}
	if(data >= walker->data){ 
		walker = walker->right;
		temp = walker;
	}
	return insert(tree,data);
};
