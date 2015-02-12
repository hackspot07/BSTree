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
	tree->root = insertNode(tree->root,data);
	return (tree->root)?1:0;
};


TreeNode_ptr searchNode(TreeNode_ptr root,int data){
	if (root == NULL || root->data == data)
       return root;
    return (root->data < data) ? searchNode(root->right, data) : searchNode(root->left, data);
};

TreeNode_ptr find(BSTree tree, int data){
	return searchNode(tree.root,data);
};


void preOrder(TreeNode_ptr root,Printer* printNode){
	if(root!=NULL){ 
		printNode(root->data);
		preOrder(root->left,printNode);
		preOrder(root->right,printNode);
	};
};

void postOrder(TreeNode_ptr root,Printer* printNode){
	if(root!=NULL){ 
		preOrder(root->left,printNode);
		printNode(root->data);
		preOrder(root->right,printNode);
	};
};

void inOrder(TreeNode_ptr root,Printer* printNode){
	if(root!=NULL){ 
		preOrder(root->left,printNode);
		preOrder(root->right,printNode);
		printNode(root->data);
	};
};

void traverse(BSTree tree,Printer* printNode){
	// open the function call which order you want to print the nodes;
	preOrder(tree.root,printNode);
	//postOrder(tree.root,printNode);
	//inOrder(tree.root,printNode);
};


TreeNode_ptr find_min(BSTree tree){ 
    TreeNode_ptr root = tree.root;
    while(root->left != NULL)
    	root = root->left;
    return root;
};

TreeNode_ptr getNodeDelete(BSTree* tree,TreeNode_ptr root,int data){
	TreeNode_ptr temp;
	if(root == NULL) 
		return root;
    if(data < root->data)
        root->left = getNodeDelete(tree,root->left, data);
    if(data >= root->data)
        root->right = getNodeDelete(tree,root->right, data); 
    if (root->left == NULL){
        temp = root->right;
        free(root);
        return temp;
    }else if (root->right == NULL){
        temp = root->left;
        free(root);
        return temp;
   }
   return temp;
};
 
TreeNode_ptr delete(BSTree* tree, int data){
	TreeNode_ptr root = tree->root;
    TreeNode_ptr walker = getNodeDelete(tree,root,data);
   	return walker;
};
