#include "tree.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>

BSTree initializeTree(){
	BSTree tree = createBSTree();
	insert(&tree,12);
	insert(&tree,99);
	insert(&tree,-42);
	insert(&tree,17);
	insert(&tree,-42);
	insert(&tree,45);
	return tree;
};

void test_creatTreeNode_will_create_newNode(){
	int data = 0;
	TreeNode_ptr node = createTreeNode(data);

	assertEqual(node->data,0);
	assertEqual((int)node->left, 0);
	assertEqual((int)node->right, 0);
	free(node);
};

void test_create_BinaryTree_with_root_node(){
	BSTree tree = createBSTree();

	assertEqual((int)tree.root,0);
};

void test_will_add_value_in_tree_and_return_1(){
	BSTree tree = createBSTree();
	int boolean = insert(&tree,100);

	assertEqual(tree.root->data,100);
	assertEqual(boolean,1);
};

void test_will_add_value_in_tree_and_return_1_(){
	BSTree tree = createBSTree();
	int boolean1;
	insert(&tree,100);
	insert(&tree,200);

	assertEqual(tree.root->data,100);
	assertEqual((int)tree.root->left, 0);
	assertEqual(tree.root->right->data,200);
};
void test_it_will_return_add_the_nodes(){
	TreeNode_ptr result = malloc(sizeof(TreeNode));
	BSTree tree = createBSTree();
	tree = initializeTree();
	
	assertEqual(tree.root->data,12);
	assertEqual(tree.root->left->data,-42);
	assertEqual(tree.root->right->data,99);
	assertEqual(tree.root->right->left->data,17);
	assertEqual(tree.root->left->right->data,-42);
	assertEqual(tree.root->right->left->right->data,45);
	free(result);
}

void test_it_will_return_45(){
	TreeNode_ptr result = malloc(sizeof(TreeNode));
	BSTree tree = createBSTree();
	tree = initializeTree();
	result = find(tree,45);
	
	assertEqual(tree.root->data,12);
	assertEqual(tree.root->left->data,-42);
	assertEqual(tree.root->right->data,99);
	assertEqual(tree.root->right->left->data,17);

	assertEqual(result->data, 45);
	free(result);
};


void test_it_will_return_NULL(){
	TreeNode_ptr result = malloc(sizeof(TreeNode));
	BSTree tree = createBSTree();
	tree = initializeTree();
	result = find(tree,49);

	assertEqual((int)result, 0);
	free(result);
};

// void test_delete_tree_will_return_12(){
// 	TreeNode_ptr result = malloc(sizeof(TreeNode));
// 	BSTree tree = createBSTree();
// 	tree = initializeTree();
// 	result = delete(&tree,12);

// 	assertEqual(result->data,99);
// };