#include "tree.h"
#include "expr_assert.h"
#include <stdio.h>


void test_creatTreeNode_will_create_newNode(){
	int data = 0;
	TreeNode_ptr node = createTreeNode(data);

	assertEqual(node->data,0);
	assertEqual((int)node->left, 0);
	assertEqual((int)node->right, 0);
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
