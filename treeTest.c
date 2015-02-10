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

	assertEqual(boolean,1);
};

void test_will_add_value_in_tree_and_return_1_(){
	BSTree tree = createBSTree();
	int boolean1,boolean2;
	boolean1 = insert(&tree,100);
	boolean2 = insert(&tree,200);

	assertEqual(boolean1,1);
	assertEqual(boolean2,1);
};

void test_it_will_return_45(){
	TreeNode_ptr result = malloc(sizeof(TreeNode));
	BSTree tree = createBSTree();
	insert(&tree,12);
	insert(&tree,99);
	insert(&tree,-42);
	insert(&tree,17);
	insert(&tree,-47);
	insert(&tree,45);
	
	result = find(tree,45);

	assertEqual(result->data, 45);
	free(result);
};