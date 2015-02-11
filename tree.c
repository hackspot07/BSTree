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


TreeNode_ptr insertNode(TreeNode_ptr root,int data){
	if(root == NULL)
		return createTreeNode(data);
	if(data < root->data)
		root->left = insertNode(root->left,data);
	else
		root->right = insertNode(root->right,data);
	return root;
};

int insert(BSTree *tree, int data){
	if(tree->root == NULL){
		tree->root = createTreeNode(data);
		return 1;
	}
	insertNode(tree->root,data);
	return 0;
};


TreeNode_ptr searchNode(TreeNode_ptr root,int data){
	if (root == NULL || root->data == data)
       return root;
    return (root->data < data) ? searchNode(root->right, data) : searchNode(root->left, data);
};

TreeNode_ptr find(BSTree tree, int data){
	return searchNode(tree.root,data);
};



// TreeNode_ptr delete(BSTree* tree,int data){
// 	TreeNode_ptr deletedNode,temp,prevNode=NULL,walker = tree->root;

// 	return NULL;
// };